#ifndef IR_DECL_HPP
#define IR_DECL_HPP

#include <cstdint>

#include "static_pool.hpp"

////////////////////////////////////////
// Main types
////////////////////////////////////////

class ir_t;
class cfg_node_t;
class ssa_node_t;
class ssa_fwd_edge_t;
class ssa_bck_edge_t;
class cfg_fwd_edge_t;
class cfg_bck_edge_t;
class ssa_value_t;

using ssa_data_pool = static_any_pool_t<class ssa_node_t>;
using cfg_data_pool = static_any_pool_t<class cfg_node_t>;

using ssa_pool = static_intrusive_pool_t<class ssa_node_t>;
using cfg_pool = static_intrusive_pool_t<class cfg_node_t>;

using ssa_ht = ssa_pool::handle_t;
using cfg_ht = cfg_pool::handle_t;

DEF_HANDLE_HASH(ssa_ht)
DEF_HANDLE_HASH(cfg_ht)

#endif
