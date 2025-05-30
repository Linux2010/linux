// SPDX-License-Identifier: GPL-2.0

#define KBUILD_MODNAME "xdp_dummy"
#include <linux/bpf.h>
#include <bpf/bpf_helpers.h>

SEC("xdp")
int xdp_dummy_prog(struct xdp_md *ctx)
{
	return XDP_PASS;
}

SEC("xdp.frags")
int xdp_dummy_prog_frags(struct xdp_md *ctx)
{
	return XDP_PASS;
}

char _license[] SEC("license") = "GPL";
