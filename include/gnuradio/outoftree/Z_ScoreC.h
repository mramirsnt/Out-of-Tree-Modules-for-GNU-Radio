/* -*- c++ -*- */
/*
 * Copyright 2025 Amir Sanati.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_OUTOFTREE_Z_SCOREC_H
#define INCLUDED_OUTOFTREE_Z_SCOREC_H

#include <gnuradio/outoftree/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace outoftree {

    /*!
     * \brief <+description of block+>
     * \ingroup outoftree
     *
     */
    class OUTOFTREE_API Z_ScoreC : virtual public gr::sync_block
    {
     public:
      typedef std::shared_ptr<Z_ScoreC> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of outoftree::Z_ScoreC.
       *
       * To avoid accidental use of raw pointers, outoftree::Z_ScoreC's
       * constructor is in a private implementation
       * class. outoftree::Z_ScoreC::make is the public interface for
       * creating new instances.
       */
      static sptr make();
    };

  } // namespace outoftree
} // namespace gr

#endif /* INCLUDED_OUTOFTREE_Z_SCOREC_H */
