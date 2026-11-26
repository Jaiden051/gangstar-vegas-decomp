// Decompiled from classes.dex (SourceFile: ImageDownloader$RequestKey.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class ImageDownloader$RequestKey {
    // Fields
    private static int HASH_MULTIPLIER;
    private static int HASH_SEED;
    java.lang.Object tag;
    java.net.URI uri;

    // Methods
    ImageDownloader$RequestKey(java.net.URI p0, Object p1)
    {
      super();
      this.uri = p0;
      this.tag = p1;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.facebook.internal.ImageDownloader$RequestKey v3;
      v2 = false;
      if ( p0 != null && p0 instanceof com.facebook.internal.ImageDownloader$RequestKey )
      {
        v3 = (com.facebook.internal.ImageDownloader$RequestKey)p0;
        if ( v3.uri == this.uri )
          return v3.tag == this.tag;
      }
      return v2;
    }

    public int hashCode()
    {
      return 37 * (this.uri.hashCode() + 1073) + this.tag.hashCode();
    }

}
