ttk_add_base_library(distanceField
  SOURCES
    DistanceField.cpp
  HEADERS
    DistanceField.h
  DEPENDS
    dijkstra
    triangulation
    )
