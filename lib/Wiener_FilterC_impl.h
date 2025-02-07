/* -*- c++ -*- */
/*
 * Copyright 2025 Amir Sanati.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_OUTOFTREE_WIENER_FILTERC_IMPL_H
#define INCLUDED_OUTOFTREE_WIENER_FILTERC_IMPL_H

#include <gnuradio/outoftree/Wiener_FilterC.h>

namespace gr {
  namespace outoftree {

    class Wiener_FilterC_impl : public Wiener_FilterC
    {
     private:
      int d_Window_Size;

     public:
      Wiener_FilterC_impl(int window_size);
      ~Wiener_FilterC_impl();
      void set_Window_Size(int window_size);
      int Window_Size();

      // Where all the action really happens
      int work(
              int noutput_items,
              gr_vector_const_void_star &input_items,
              gr_vector_void_star &output_items
      );
    };

  } // namespace outoftree
} // namespace gr

#endif /* INCLUDED_OUTOFTREE_WIENER_FILTERC_IMPL_H */
