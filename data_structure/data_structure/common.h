#pragma once
#include<iostream>
#include"common.h"

constexpr auto CAPACITY = 5;

template<class T>
struct node
{
	T key;
	node<T>* pre;
	node<T>* next;
	node(T k, node<T>* pre_ = nullptr, node<T>* next_ = nullptr) :key(k), pre(pre_), next(next_) {}
};