bench_submatch_dfa_jit_CXXFLAGS = $(AM_CXXFLAGS) -std=c++11 -O3 -I $(top_srcdir)
bench_submatch_dfa_jit_LDFLAGS = $(LDFLAGS_RE2) -lbenchmark -lpthread
bench_submatch_dfa_jit_LDADD = $(top_builddir)/libre2c.la

noinst_PROGRAMS = bench_submatch_dfa_jit

bench_submatch_dfa_jit_SOURCES = bench.cc \
    $(top_srcdir)/benchmarks/common/common.cc \
    $(top_srcdir)/benchmarks/common/common.h \
    $(top_srcdir)/benchmarks/common/strings_atom.h \
    $(top_srcdir)/benchmarks/common/strings_date.h \
    $(top_srcdir)/benchmarks/common/strings_http.h \
    $(top_srcdir)/benchmarks/common/strings_ipv4.h \
    $(top_srcdir)/benchmarks/common/strings_ipv6.h \
    $(top_srcdir)/benchmarks/common/strings_uri.h

all-local: bench_submatch_dfa_jit
