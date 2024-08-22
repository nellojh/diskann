//
// Created by krn on 8/19/24.
//

#ifndef DISKANN_TIME_COUNT_H
#define DISKANN_TIME_COUNT_H
#include <cstdint>
extern thread_local uint64_t thread_count_insert_time;
extern thread_local uint64_t thread_count_pre_time;
extern thread_local uint64_t thread_count_search_time;
extern thread_local uint64_t thread_count_iterate_time;
extern thread_local uint64_t thread_count_erase_time;
extern thread_local uint64_t thread_count_prune_time;
extern thread_local uint64_t thread_count_add_time;
extern thread_local uint64_t thread_count_inter_time;

extern uint64_t final_count_insert_time;
extern uint64_t final_count_pre_time;
extern uint64_t final_count_search_time;
extern uint64_t final_count_iterate_time;
extern uint64_t final_count_erase_time;
extern uint64_t final_count_prune_time;
extern uint64_t final_count_add_time;
extern uint64_t final_count_inter_time;

// delete part

extern thread_local uint64_t thread_count_total_time;
extern thread_local uint64_t thread_count_find_delete_time;
extern thread_local uint64_t thread_count_find_time;
extern thread_local uint64_t thread_count_delete_time;
extern thread_local uint64_t thread_count_pre_delete_time;
extern thread_local uint64_t thread_count_occ_time;

extern uint64_t final_count_total_time;
extern uint64_t final_count_find_delete_time;
extern uint64_t final_count_find_time;
extern uint64_t final_count_delete_time;
extern uint64_t final_count_pre_delete_time;
extern uint64_t final_count_occ_time;
extern uint64_t count_prune;
extern std::vector<uint64_t> count_600;

#endif // DISKANN_TIME_COUNT_H
