/* -*- c++ -*- */
/*
 * Copyright 2025 Amir Sanati.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include <gnuradio/io_signature.h>
#include "Z_ScoreC_impl.h"

namespace gr {
  namespace outoftree {

    #pragma message("set the following appropriately and remove this warning")
    using input_type = float;
    #pragma message("set the following appropriately and remove this warning")
    using output_type = float;
    Z_ScoreC::sptr
    Z_ScoreC::make()
    {
      return gnuradio::make_block_sptr<Z_ScoreC_impl>(
        );
    }


    /*
     * The private constructor
     */
    Z_ScoreC_impl::Z_ScoreC_impl()
      : gr::sync_block("Z_ScoreC",
              gr::io_signature::make(1 /* min inputs */, 1 /* max inputs */, sizeof(input_type)),
              gr::io_signature::make(1 /* min outputs */, 1 /*max outputs */, sizeof(output_type)))
    {}

    /*
     * Our virtual destructor.
     */
    Z_ScoreC_impl::~Z_ScoreC_impl()
    {
    }
    float calculate_mean(const float arr[], int n) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    if (n == 0){
        n = 1;
    }
    return sum / n;
}

// Function to calculate the standard deviation
float calculate_std(const float arr[], int n, float mean) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += (arr[i] - mean) * (arr[i] - mean);
    }
    if (n == 0){
        n = 1;
    }
    return sqrt(sum / n);
}

    int
    Z_ScoreC_impl::work(int noutput_items,
        gr_vector_const_void_star &input_items,
        gr_vector_void_star &output_items)
    {
    const float* in = (const float*)input_items[0];
    float  *out = (float *) output_items[0];
    int len = noutput_items;
    float mean = calculate_mean(in,len);
    float std = calculate_std(in, len, mean);
    if (std == 0 ){
        std = 1;
    }

     for (int i = 0; i < len; i++) {
        out[i] = (in[i] - mean) / std;
    }
      return noutput_items;
    }

  } /* namespace outoftree */
} /* namespace gr */
