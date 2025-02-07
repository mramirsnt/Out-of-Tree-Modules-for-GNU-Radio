/* -*- c++ -*- */
/*
 * Copyright 2025 Amir Sanati.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include <gnuradio/io_signature.h>
#include "Wiener_FilterC_impl.h"

namespace gr {
  namespace outoftree {

    #pragma message("set the following appropriately and remove this warning")
    using input_type = float;
    #pragma message("set the following appropriately and remove this warning")
    using output_type = float;
    Wiener_FilterC::sptr
    Wiener_FilterC::make(int window_size)
    {
      return gnuradio::make_block_sptr<Wiener_FilterC_impl>(
        window_size);
    }


    /*
     * The private constructor
     */
    Wiener_FilterC_impl::Wiener_FilterC_impl(int window_size)
      : gr::sync_block("Wiener_FilterC",
              gr::io_signature::make(1 /* min inputs */, 1 /* max inputs */, sizeof(input_type)),
              gr::io_signature::make(1 /* min outputs */, 1 /*max outputs */, sizeof(output_type)))
    {}

    /*
     * Our virtual destructor.
     */
    Wiener_FilterC_impl::~Wiener_FilterC_impl()
    {
    }

    int
    Wiener_FilterC_impl::work(int noutput_items,
        gr_vector_const_void_star &input_items,
        gr_vector_void_star &output_items)
    {
      auto in = static_cast<const input_type*>(input_items[0]);
      auto out = static_cast<output_type*>(output_items[0]);

      #pragma message("Implement the signal processing in your block and remove this warning")
      // Do <+signal processing+>

      // Tell runtime system how many output items we produced.
      return noutput_items;
    }

  } /* namespace outoftree */
} /* namespace gr */
