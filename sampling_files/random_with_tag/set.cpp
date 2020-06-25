uint32_t get_set(uint32_t n_block_capacity, uint32_t idx_tag, uint32_t n_way){
// n_block_capacity: 		number of blocks that fit into cache memory 
// idx_tag: 				access physical index (i.e. tag - subset of target address)
// n_way: 					set associativity of cache (i.e. (n_way = 2) => two-way set associative)
// 							note: if (n_way == cache_block_capacity) => fully associative

	// use bit mask to isolate the part of the address that constrains set placement
	if (n_way != n_block_capacity){
		return idx_tag & ((n_block_capacity / n_way) - 1);
	}
	// if fully associative then all blocks placed into same set
	else {
		return 0; 	
	}

} 