Generic implementation of the [Patch Match](http://gfx.cs.princeton.edu/gfx/pubs/Barnes_2009_PAR/index.php) algorithm.

This implementation is generic over many concepts:
* the distance used to compare patches
* the data structure used to store patches
* the data structure used to store the offsets and the distances

As a result, this implementation can be used for many types of problems (2D images, 3D images, or anything that can be
associated to the previous concepts) and any library. 

The cost of this genericity is that it can no be used immediately and needs adapters to be written. For an out-of-the-box 
solution for OpenCV images, see [this repository](https://github.com/antoinewdg/patch-match-opencv).
