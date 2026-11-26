// Decompiled from classes.dex (SourceFile: ImageResponseCache.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.LoggingBehavior;
class ImageResponseCache {
    // Fields
    static final java.lang.String TAG;
    private static volatile com.facebook.internal.FileLruCache imageCache;

    // Methods
    static
    {
      TAG = com.facebook.internal.ImageResponseCache.class.getSimpleName();
    }

    ImageResponseCache()
    {
      super();
    }

    static void clearCache(android.content.Context p0)
    {
      getCache(p0).clearCache();
    }

    static synchronized com.facebook.internal.FileLruCache getCache(android.content.Context p0)
    {
      com.facebook.internal.FileLruCache v1;
      v1 = imageCache;
      if ( v1 == null )
        imageCache = new com.facebook.internal.FileLruCache(p0.getApplicationContext(), TAG, new com.facebook.internal.FileLruCache$Limits());
      return imageCache;
    }

    static java.io.InputStream getCachedImageStream(java.net.URI p0, android.content.Context p1)
    {
      java.io.InputStream v2;
      v2 = null;
      if ( p0 != null && isCDNURL(p0) )
      {
        return getCache(p1).get(p0.toString());
      }
      return v2;
    }

    static java.io.InputStream interceptAndCacheImageStream(
            android.content.Context p0,
            java.net.HttpURLConnection p1)
 throws java.io.IOException {
      java.io.InputStream InputStream;
      java.net.URL URL;
      InputStream = null;
      if ( p1.getResponseCode() != 200 )
        return InputStream;
      URL = p1.getURL();
      InputStream = p1.getInputStream();
      try
      {
        if ( isCDNURL(URL.toURI()) )
          return getCache(p0).interceptAndPut(URL.toString(), new com.facebook.internal.ImageResponseCache$BufferedHttpInputStream(InputStream, p1));
        return InputStream;
      }
      catch ( java.io.IOException e )
      {
        return InputStream;
      }
      catch ( java.net.URISyntaxException e )
      {
      }
      return InputStream;
    }

    private static boolean isCDNURL(java.net.URI p0)
    {
      boolean v1;
      String Host;
      v1 = true;
      if ( p0 == null )
        return false;
      Host = p0.getHost();
      if ( !Host.endsWith("fbcdn.net") && (!Host.startsWith("fbcdn") || !Host.endsWith("akamaihd.net")) )
        return false;
      return v1;
    }

}
