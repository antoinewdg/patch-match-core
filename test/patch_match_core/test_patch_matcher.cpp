#include "catch.hpp"

#include "patch_match_core/patch_matcher.h"
#include "dummies/distance.h"
#include "dummies/maps.h"
#include "dummies/patch_servers.h"

using namespace pm::core;
using namespace pm;


TEST_CASE("Dummy PatchMatcher compiles") {
    typedef PatchMatcher<
            dummies::SourcePatches, dummies::TargetPatches,
            dummies::Distance,
            dummies::OffsetMap, dummies::DistanceMap
    > MatcherType;

    dummies::SourcePatches s;
    dummies::TargetPatches t;
    dummies::Distance distance;
    dummies::OffsetMap offset_map;
    dummies::DistanceMap distance_map;

    MatcherType matcher(s, t, distance, offset_map, distance_map);

    matcher.initialize_offset_map_randomly();
    matcher.iterate_n_times(2);
}