# P12 – Deployment & DevOps Integration

## Objective

Establish a reproducible deployment and development infrastructure for the Counter-UAS Autonomous Interceptor project.

This phase introduces Docker-based application packaging, environment standardization, multi-service orchestration, and Continuous Integration (CI) through GitHub Actions.

The implemented DevOps infrastructure provides a consistent execution environment across different machines while enabling automated repository validation for every code change.

The deployment architecture is designed to support future edge deployment, cloud deployment, and continuous delivery workflows.

---

# Deployment Architecture

```text
                    Developer
                         │
                  Git Commit / Push
                         │
                         ▼
                GitHub Repository
                         │
                         ▼
               GitHub Actions (CI)
                         │
      ┌──────────────────┼──────────────────┐
      ▼                  ▼                  ▼
 Backend Validation  Frontend Validation  Future ROS2 Validation
      │                  │
      └──────────────────┼──────────────────┘
                         ▼
                Repository Validation
                         │
                         ▼
                Docker Infrastructure
                         │
      ┌──────────────────┼──────────────────┐
      ▼                  ▼                  ▼
 ROS2 Image        Backend Image     Frontend Image
      │                  │                  │
      └──────────────────┼──────────────────┘
                         ▼
                 Docker Compose
                         │
                         ▼
              Local / Future Production
```

---

# Deployment Stack

```text
Ubuntu 22.04

Docker

Docker Compose

GitHub Actions

Python 3.10

ROS2 Humble

FastAPI

Plotly Dash

PostgreSQL
```

---

# Project Deployment Structure

```text
Counter_UAS/

docker/

Dockerfile.ros2

Dockerfile.backend

Dockerfile.frontend

ros_entrypoint.sh

backend_entrypoint.sh

frontend_entrypoint.sh

docker-compose.yaml


requirements/

ros2.txt

backend.txt

frontend.txt


.env

.github/

workflows/

ci.yml
```

---

# P12.1 — Docker Infrastructure

## Goal

Package each software component together with its runtime environment to ensure reproducible execution across development and deployment platforms.

Docker eliminates dependency inconsistencies by encapsulating application code, libraries, and system packages into isolated containers.

---

## Components

```text
ROS2 Workspace

Backend Server

Frontend Dashboard

PostgreSQL Database
```

---

## Responsibilities

```text
Application Packaging

Dependency Isolation

Runtime Consistency

Portable Deployment

Environment Reproducibility
```

---

# Container Architecture

```text
                    Docker Host
                         │
 ┌───────────────────────┼────────────────────────┐
 ▼                       ▼                        ▼

ROS2 Container     Backend Container     Frontend Container

ROS2 Humble        FastAPI               Plotly Dash

YOLO               PostgreSQL Client     Dashboard

DeepSORT           WebSocket Server

PX4 Interface       REST API

                         │
                         ▼

                Docker Network

                         │

                    PostgreSQL
```

---

# P12.2 — ROS2 Container

## Goal

Package the complete ROS2 autonomy pipeline into a portable execution environment.

The ROS2 container is responsible for hosting the complete perception and autonomous guidance stack.

---

## Files

```text
docker/

Dockerfile.ros2

ros_entrypoint.sh

requirements/

ros2.txt
```

---

## Responsibilities

```text
ROS2 Environment

Python Dependencies

Workspace Build

Node Execution

ROS Environment Initialization
```

---

## Installed Components

```text
ROS2 Humble

Python 3

Colcon

OpenCV

PyTorch

YOLO

DeepSORT

MAVLink

NumPy

Utility Libraries
```

---

## Container Workflow

```text
Base ROS2 Image

↓

Install Ubuntu Packages

↓

Install Python Dependencies

↓

Copy ROS2 Workspace

↓

Build Workspace

↓

Source ROS Environment

↓

Execute ROS Nodes
```

---

# ROS2 Entrypoint

## Purpose

Initialize the ROS2 runtime before launching any ROS2 node.

---

## Responsibilities

```text
Source ROS2 Environment

Source Workspace

Execute Requested Command
```

---

# P12.3 — Backend Container

## Goal

Package the backend services responsible for telemetry storage, REST APIs, WebSocket streaming, and ROS2 bridge integration.

---

## Files

```text
docker/

Dockerfile.backend

backend_entrypoint.sh

requirements/

backend.txt
```

---

## Responsibilities

```text
FastAPI Server

REST APIs

WebSocket Streaming

Telemetry Processing

Database Communication
```

---

## Installed Components

```text
Python

FastAPI

SQLAlchemy

Pydantic

PostgreSQL Driver

WebSockets

Utility Libraries
```

---

## Backend Workflow

```text
Python Base Image

↓

Install Packages

↓

Install Python Dependencies

↓

Copy Backend

↓

Initialize Backend

↓

Launch FastAPI
```

---

# Backend Entrypoint

## Purpose

Initialize the runtime environment before starting the backend server.

---

## Responsibilities

```text
Environment Initialization

Load Configuration

Launch Backend Application
```

---

# P12.4 — Frontend Container

## Goal

Package the Ground Control Station (GCS) dashboard into an isolated runtime environment.

The frontend visualizes telemetry, guidance commands, controller outputs, and target tracking information received from the backend through WebSocket streams.

---

## Files

```text
docker/

Dockerfile.frontend

frontend_entrypoint.sh

requirements/

frontend.txt
```

---

## Responsibilities

```text
Dashboard Execution

Graph Rendering

WebSocket Client

Operator Interface

Mission Monitoring
```

---

## Installed Components

```text
Python

Plotly Dash

Plotly

Requests

WebSocket Client

NumPy

Utility Libraries
```

---

## Frontend Workflow

```text
Python Base Image

↓

Install Packages

↓

Install Python Dependencies

↓

Copy Frontend

↓

Initialize Dashboard

↓

Launch Plotly Dash
```

---

# Frontend Entrypoint

## Purpose

Prepare the execution environment before launching the dashboard application.

---

## Responsibilities

```text
Environment Initialization

Dashboard Startup

Execute Dashboard Server
```

---

# Overall Docker Architecture

```text
                    Docker Engine

                           │

      ┌────────────────────┼────────────────────┐

      ▼                    ▼                    ▼

ROS2 Container      Backend Container     Frontend Container

      │                    │                    │

      └────────────────────┼────────────────────┘

                           ▼

                    Docker Compose

                           │

                           ▼

                 Counter-UAS Platform
```

# P12.5 — Docker Compose

## Goal

Docker Compose provides centralized orchestration for all project containers.

Instead of manually starting every service independently, Docker Compose launches and manages the complete software stack using a single configuration file.

This simplifies development, testing, and future deployment while ensuring all services communicate over a common Docker network.

---

## File

```text
docker-compose.yaml
```

---

## Responsibilities

```text
Container Orchestration

Service Networking

Volume Management

Environment Injection

Port Mapping

Container Startup Order
```

---

# Managed Services

```text
PostgreSQL

Backend Server

Frontend Dashboard

ROS2 Workspace (Future)
```

---

# Docker Compose Architecture

```text
                Docker Compose

                      │

      ┌───────────────┼───────────────┐

      ▼               ▼               ▼

 PostgreSQL       Backend        Frontend

      │               │               │

      └───────────────┼───────────────┘

                      ▼

              Docker Network
```

---

# Service Communication

```text
Frontend

↓

WebSocket

↓

Backend

↓

SQLAlchemy

↓

PostgreSQL



ROS2 (Future)

↓

ROS Bridge

↓

Backend

↓

Frontend
```

---

# Deployment Workflow

```text
docker compose up

↓

Create Network

↓

Create Containers

↓

Initialize Database

↓

Start Backend

↓

Start Frontend

↓

Application Ready
```

---

# Benefits

```text
Single Command Deployment

Service Isolation

Automatic Networking

Simplified Maintenance

Consistent Runtime
```

---

# P12.6 — Environment Configuration

## Goal

Centralize all configurable parameters into a single environment configuration file.

Environment variables separate application configuration from application code, enabling the same software to execute across different deployment environments without modifying source files.

---

## File

```text
.env
```

---

# Responsibilities

```text
Database Configuration

Backend Configuration

Frontend Configuration

ROS Configuration

Logging

Runtime Parameters
```

---

# Configuration Groups

## PostgreSQL

```text
Host

Port

Database Name

Username

Password
```

---

## Backend

```text
Server Address

Server Port

Logging

Update Rate

Pipeline Period
```

---

## Frontend

```text
Dashboard Host

Dashboard Port

Backend Address
```

---

## ROS2

```text
ROS_DOMAIN_ID
```

---

# Configuration Flow

```text
.env

↓

Configuration Classes

↓

Backend

↓

Frontend

↓

Database

↓

ROS2
```

---

# Advantages

```text
Centralized Configuration

Easy Environment Switching

Improved Maintainability

No Hardcoded Values

Deployment Flexibility
```

---

# P12.7 — GitHub Actions (Continuous Integration)

## Goal

Automatically validate every repository change before it becomes part of the main project.

Continuous Integration ensures the repository remains in a buildable and syntactically correct state by executing automated validation workflows on every push and pull request.

---

# File

```text
.github/

workflows/

ci.yml
```

---

# Responsibilities

```text
Repository Checkout

Python Environment Setup

Dependency Installation

Source Code Validation

Automatic Build Verification
```

---

# Continuous Integration Pipeline

```text
Developer

↓

Git Commit

↓

Git Push

↓

GitHub Repository

↓

GitHub Actions

↓

Checkout Repository

↓

Setup Python

↓

Install Backend Dependencies

↓

Install Frontend Dependencies

↓

Compile Backend

↓

Compile Frontend

↓

PASS / FAIL
```

---

# Validation Tasks

```text
Clone Repository

Install Python

Install Backend Requirements

Install Frontend Requirements

Compile Backend

Compile Frontend
```

---

# CI Architecture

```text
GitHub Repository

↓

GitHub Actions

↓

Ubuntu Runner

↓

Python Setup

↓

Dependency Installation

↓

Repository Validation

↓

Validation Report
```

---

# Continuous Integration Benefits

```text
Automatic Repository Validation

Early Error Detection

Dependency Verification

Consistent Development Workflow

Improved Code Quality
```

---

# Repository Validation Flow

```text
Developer

↓

Code Changes

↓

Push to Repository

↓

GitHub Runner

↓

Execute Workflow

↓

Validate Repository

↓

Green Check

or

Red Failure
```

---

# P12.8 — Deployment Verification

## Goal

Verify that every deployment component has been configured correctly before project release.

---

# Docker Verification

## Backend Image

```bash
docker build \
-f docker/Dockerfile.backend \
-t counter-uas-backend .
```

---

## Frontend Image

```bash
docker build \
-f docker/Dockerfile.frontend \
-t counter-uas-frontend .
```

---

## Docker Compose Validation

```bash
docker compose config
```

---

# GitHub Actions Verification

```text
Push Repository

↓

GitHub Actions

↓

Workflow Execution

↓

Repository Validation

↓

Green Status
```

---

# Verification Checklist

```text
Dockerfiles Created

Docker Compose Created

Environment Configuration Completed

GitHub Actions Configured

Repository Validation Successful

Application Structure Verified
```

---

# Current Deployment Status

```text
Backend Docker

Completed

Frontend Docker

Completed

ROS2 Docker

Planned

Docker Compose

Completed

GitHub Actions

Completed
```

---

# Current DevOps Architecture

```text
                   Developer

                        │

                  Git Commit

                        │

                        ▼

                GitHub Repository

                        │

                        ▼

              GitHub Actions (CI)

                        │

        Repository Validation Passed

                        │

                        ▼

             Docker Infrastructure

                        │

      ┌─────────────────┼─────────────────┐

      ▼                 ▼                 ▼

 Backend Image    Frontend Image     ROS2 Image*

                        │

                        ▼

                Docker Compose

                        │

                        ▼

             Deployment Environment


*ROS2 Containerization planned for future releases.
```

# P12.9 — Future Improvements

## Goal

The current DevOps implementation establishes a solid Continuous Integration (CI) foundation while preparing the project for future deployment and production infrastructure.

The following enhancements are planned for future releases.

---

# Full ROS2 Containerization

## Goal

Containerize the complete autonomous robotics stack.

The ROS2 container will include the entire perception, tracking, estimation, guidance, and control pipeline together with the required ROS2 interfaces and PX4 communication components.

---

## Planned Components

```text
ROS2 Humble

PX4 Messages

Custom Interfaces

YOLO

DeepSORT

Kalman Filter

Guidance

Control

Visualization
```

---

# Continuous Delivery (CD)

## Goal

Automatically package and deliver the application after successful repository validation.

The Continuous Delivery pipeline will extend the current CI workflow by producing deployable container images.

---

## Planned Pipeline

```text
Git Push

↓

GitHub Actions (CI)

↓

Repository Validation

↓

Build Docker Images

↓

Push Images

↓

Deployment Ready
```

---

# Container Registry

## Goal

Store versioned Docker images for deployment.

---

## Planned Registries

```text
GitHub Container Registry (GHCR)

Docker Hub
```

---

# Edge Deployment

## Goal

Deploy the complete Counter-UAS platform onto embedded edge hardware.

---

## Target Platforms

```text
NVIDIA Jetson Orin

Jetson Xavier

Jetson Nano

Industrial Edge Computers

Ubuntu-based Companion Computers
```

---

# Cloud Deployment

## Goal

Support remote monitoring and mission management through cloud infrastructure.

---

## Planned Features

```text
Remote Dashboard

Mission Monitoring

Cloud APIs

Mission Database

Remote Telemetry
```

---

# Monitoring & Observability

## Goal

Provide real-time health monitoring of deployed services.

---

## Planned Components

```text
Prometheus

Grafana

Container Health Checks

Performance Monitoring

Resource Monitoring
```

---

# Security Improvements

## Planned Features

```text
HTTPS

Authentication

Role-based Access

Secret Management

Secure Environment Variables
```

---

# Deployment Roadmap

```text
Version 1

Development

Simulation

Backend

Dashboard

CI

Docker Infrastructure

──────────────────────────────

Version 2

ROS2 Docker

Continuous Delivery

Container Registry

Jetson Deployment

──────────────────────────────

Version 3

Cloud Deployment

Monitoring

Production Infrastructure

OTA Updates

Fleet Management
```

---

# Overall DevOps Architecture

```text
                        Developer

                             │

                      Source Code

                             │

                             ▼

                    GitHub Repository

                             │

                             ▼

                 GitHub Actions (CI)

                             │

                Repository Validation

                             │

                             ▼

                  Docker Infrastructure

       ┌────────────────────┼────────────────────┐

       ▼                    ▼                    ▼

 ROS2 Container      Backend Container    Frontend Container

       │                    │                    │

       └────────────────────┼────────────────────┘

                            ▼

                    Docker Compose

                            │

                            ▼

              Deployment Environment

                            │

            ┌───────────────┼────────────────┐

            ▼                                ▼

     Edge Deployment                 Cloud Deployment

      (Future)                          (Future)
```

---

# DevOps Workflow

```text
Write Code

↓

Commit Changes

↓

Push Repository

↓

GitHub Actions

↓

Repository Validation

↓

PASS

↓

Docker Images

↓

Docker Compose

↓

Deployment

↓

Production

(Future)
```

---

# Phase Summary

During this phase, a complete DevOps foundation was established for the Counter-UAS Autonomous Interceptor project.

The deployment infrastructure standardizes application execution through Docker, centralizes configuration using environment variables, orchestrates multi-service applications using Docker Compose, and introduces automated repository validation through GitHub Actions.

Although the complete ROS2 containerization and Continuous Delivery pipeline are reserved for future releases, the implemented infrastructure provides a scalable foundation for deploying the project across development, testing, and production environments.

---

# Result

Successfully implemented:

- Docker infrastructure for application containerization.
- Dockerfiles for ROS2, Backend, and Frontend services.
- Docker Compose for multi-service orchestration.
- Environment-based configuration management.
- GitHub Actions Continuous Integration (CI) workflow.
- Automated dependency installation and repository validation.
- Automated backend and frontend compilation verification.
- Standardized deployment architecture for future expansion.

The Counter-UAS Autonomous Interceptor project now includes an end-to-end software engineering workflow covering autonomous robotics, backend systems, real-time visualization, DevOps infrastructure, and Continuous Integration, providing a strong foundation for future Continuous Delivery, edge deployment, and production-scale operations.