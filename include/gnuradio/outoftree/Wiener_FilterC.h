/* -*- c++ -*- */
/*
 * Copyright 2025 Amir Sanati.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_OUTOFTREE_WIENER_FILTERC_H
#define INCLUDED_OUTOFTREE_WIENER_FILTERC_H

#include <gnuradio/outoftree/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace outoftree {

    /*!
     * \brief <+description of block+>
     * \ingroup outoftree
     *
     */
    class OUTOFTREE_API Wiener_FilterC : virtual public gr::sync_block
    {
     public:
      typedef std::shared_ptr<Wiener_FilterC> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of outoftree::Wiener_FilterC.
       *
       * To avoid accidental use of raw pointers, outoftree::Wiener_FilterC's
       * constructor is in a private implementation
       * class. outoftree::Wiener_FilterC::make is the public interface for
       * creating new instances.
       */
      static sptr make(int window_size);
      virtual void set_Window_Size(int window_size) = 0;
      virtual int Window_Size()=0;
    };

  } // namespace outoftree
} // namespace gr

#endif /* INCLUDED_OUTOFTREE_WIENER_FILTERC_H */
