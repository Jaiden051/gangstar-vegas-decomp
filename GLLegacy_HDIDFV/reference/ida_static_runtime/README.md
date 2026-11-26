IDA Pro output for the code that libgenerator.so linked in statically (gnustl
std::string/iostream helpers, boost.uuid sha1/seed_rng, boost.random
lagged_fibonacci44497, boost::lexical_cast exceptions).

These files are kept for reference only and are **not compiled**. The
game-specific logic they wrapped (HDIDFVGenerator::getVersion/generate plus
the two JNI exports) is rebuilt as readable, portable C++14 in ../../jni/.
