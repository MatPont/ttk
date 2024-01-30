/// \ingroup base
/// \class ttk::MergeTreeAutoencoderDecoding
/// \author Mathieu Pont <mathieu.pont@lip6.fr>
/// \date 2023.
///
/// This module defines the %MergeTreeAutoencoderDecoding class that computes
/// TODO
///
/// \b Related \b publication: \n
/// TODO
///

#pragma once

// ttk common includes
#include <Debug.h>
#include <MergeTreeAutoencoder.h>
#include <Triangulation.h>

namespace ttk {

  /**
   * The MergeTreeAutoencoderDecoding class provides methods to compute TODO
   */
  class MergeTreeAutoencoderDecoding : virtual public Debug,
                                       public MergeTreeAutoencoder {

  public:
    MergeTreeAutoencoderDecoding();

#ifdef TTK_ENABLE_TORCH
    void execute(std::vector<ttk::ftm::MergeTree<float>> &originsTrees,
                 std::vector<ttk::ftm::MergeTree<float>> &originsPrimeTrees,
                 std::vector<unsigned int *> &allRevNodeCorr,
                 std::vector<unsigned int *> &allRevNodeCorrPrime,
                 std::vector<unsigned int> &allRevNodeCorrSize,
                 std::vector<unsigned int> &allRevNodeCorrPrimeSize);
#endif

  }; // MergeTreeAutoencoderDecoding class

} // namespace ttk
