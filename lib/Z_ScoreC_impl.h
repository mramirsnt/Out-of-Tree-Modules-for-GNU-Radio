/* -*- c++ -*- */
/*
 * Copyright 2025 Amir Sanati.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_OUTOFTREE_Z_SCOREC_IMPL_H
#define INCLUDED_OUTOFTREE_Z_SCOREC_IMPL_H

#include <gnuradio/outoftree/Z_ScoreC.h>

namespace gr {
  namespace outoftree {

    class Z_ScoreC_impl : public Z_ScoreC
    {
     private:
      // Nothing to declare in this block.

     public:
      Z_ScoreC_impl();
      ~Z_ScoreC_impl();

      // Where all the action really happens
      int work(
              int noutput_items,
              gr_vector_const_void_star &input_items,
              gr_vector_void_star &output_items
      );
    };

  } // namespace outoftree
} // namespace gr

#endif /* INCLUDED_OUTOFTREE_Z_SCOREC_IMPL_H */
