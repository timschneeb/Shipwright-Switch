#pragma once
#include <thread>
#include <atomic>
#include <mutex>
#include <condition_variable>

static struct {
    std::thread thread;
    std::mutex mutex;
    std::condition_variable cv_to_thread, cv_from_thread;
    std::atomic<bool> running {false};
    std::atomic<bool> initialized {false};
    bool processing;
    bool asyncBuffer;
} audio;
