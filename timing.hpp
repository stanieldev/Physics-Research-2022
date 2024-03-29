/*
 * File:	timing.hpp
 * Author:	Stanley Goodwin
 * Provides a function that makes a string of an interval of time.
 */
#pragma once
#ifndef TIMING_H
#define TIMING_H

#include <chrono>
#include <string>

#define time std::chrono::high_resolution_clock::time_point
std::string duration_as_string(time _start, time _stop);

#endif TIMING_H