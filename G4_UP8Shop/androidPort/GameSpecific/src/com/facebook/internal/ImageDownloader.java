// Decompiled from classes.dex (SourceFile: ImageDownloader.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import android.graphics.BitmapFactory;
import android.os.Looper;
public class ImageDownloader {
    // Fields
    private static int CACHE_READ_QUEUE_MAX_CONCURRENT;
    private static int DOWNLOAD_QUEUE_MAX_CONCURRENT;
    private static com.facebook.internal.WorkQueue cacheReadQueue;
    private static com.facebook.internal.WorkQueue downloadQueue;
    private static android.os.Handler handler;
    private static final java.util.Map pendingRequests;

    // Methods
    static
    {
      downloadQueue = new com.facebook.internal.WorkQueue(8);
      cacheReadQueue = new com.facebook.internal.WorkQueue(2);
      pendingRequests = new java.util.HashMap();
    }

    public ImageDownloader()
    {
      super();
    }

    /* synthetic */ static void access$100(
            com.facebook.internal.ImageDownloader$RequestKey p0,
            android.content.Context p1,
            boolean p2)
    {
      readFromCache(p0, p1, p2);
    }

    /* synthetic */ static void access$200(
            com.facebook.internal.ImageDownloader$RequestKey p0,
            android.content.Context p1)
    {
      download(p0, p1);
    }

    public static boolean cancelRequest(com.facebook.internal.ImageRequest p0)
    {
      java.net.URI ImageUri;
      Object CallerTag; // RETVAL
      com.facebook.internal.ImageDownloader$RequestKey v3;
      java.util.Map v4;
      com.facebook.internal.ImageDownloader$DownloaderContext v5;
      ImageUri = p0.getImageUri();
      CallerTag = p0.getCallerTag();
      v3 = new com.facebook.internal.ImageDownloader$RequestKey(ImageUri, CallerTag);
      v4 = pendingRequests;
      synchronized ( v4 )
      {
        v5 = (com.facebook.internal.ImageDownloader$DownloaderContext)pendingRequests.get(v3);
        if ( v5 == null )
          return false;
        if ( v5.workItem.cancel() )
          pendingRequests.remove(v3);
        else
          v5.isCancelled = true;
        return true;
      }
    }

    public static void clearCache(android.content.Context p0)
    {
      ImageResponseCache.clearCache(p0);
      UrlRedirectCache.clearCache(p0);
    }

    private static void download(
            com.facebook.internal.ImageDownloader$RequestKey p0,
            android.content.Context p1)
    {
      java.io.Closeable v2 = null;
      Object v3 = null;
      int v4 = 0;
      java.net.HttpURLConnection v5 = null;
      int ResponseCode = 0; // RETVAL
      java.io.InputStream ErrorStream = null; // RETVAL
      StringBuilder v8 = null;
      java.io.InputStreamReader v9 = null;
      char[] i = null;
      int v11 = 0; // RETVAL
      Exception v13 = null;
      java.net.URLConnection v14 = null;
      String HeaderField = null;
      java.net.URI v16 = null;
      com.facebook.internal.ImageDownloader$DownloaderContext v17 = null; // RETVAL
      com.facebook.FacebookException v18 = null;
      Exception v19 = null;
      java.io.InputStream v20 = null; // RETVAL
      Exception v22 = null;
      java.net.URLConnection v23 = null;
      Object v25 = null;
      java.net.URLConnection v26 = null;
      Object v27 = null;
      Object v29 = null;
      Exception v31 = null;
      Exception v33 = null;
      java.io.IOException _cv_1 = null;
      java.net.URISyntaxException _cv_2 = null;
      Throwable _cv_3 = null;
      java.io.IOException _cv_4 = null;
      java.net.URISyntaxException _cv_5 = null;
      Throwable _cv_6 = null;
      java.io.IOException _cv_7 = null;
      java.net.URISyntaxException _cv_8 = null;
      Throwable _cv_9 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              v3 = null;
              v4 = 1;
              _ehCatchPc = 13;
              v5 = (java.net.HttpURLConnection)new java.net.URL(p0.uri.toString()).openConnection();
              _ehCatchPc = 8;
              v5.setInstanceFollowRedirects(false);
              ResponseCode = v5.getResponseCode();
              _ehCatchPc = 1;
              switch ( ResponseCode )
              {
              case 200:
              v20 = ImageResponseCache.interceptAndCacheImageStream(p1, v5);
              v2 = v20;
              v18 = null;
              v3 = BitmapFactory.decodeStream(v20);
              { _pc = 7; continue _sm; }
              case 301:
              case 302:
              HeaderField = v5.getHeaderField("location");
              if ( Utility.isNullOrEmpty(HeaderField) )
              {
              v4 = 0;
              v18 = null;
              v2 = null;
              }
              else
              {
              v16 = new java.net.URI(HeaderField);
              UrlRedirectCache.cacheUriRedirect(p1, p0.uri, v16);
              v17 = removePendingRequest(p0);
              if ( v17 != null && !v17.isCancelled )
              enqueueCacheRead(v17.request, new com.facebook.internal.ImageDownloader$RequestKey(v16, p0.tag), false);
              v4 = 0;
              v18 = null;
              v2 = null;
              }
              { _pc = 7; continue _sm; }
              default:
              ErrorStream = v5.getErrorStream();
              v2 = ErrorStream;
              v8 = new StringBuilder();
              if ( ErrorStream != null )
              {
              v9 = new java.io.InputStreamReader(ErrorStream);
              for ( i = new char[128]; ; v8.append(i, 0, v11) )
              {
              v11 = v9.read(i, 0, i.length);
              if ( v11 <= 0 )
              break;
              }
              Utility.closeQuietly(v9);
              }
              else
              {
              v8.append(p1.getString(2131165523));
              }
              v18 = new com.facebook.FacebookException(v8.toString());
              { _pc = 7; continue _sm; }
              }



            case 1:
              _ehCatchPc = 8;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 3; continue _sm; }
              _cv_1 = (java.io.IOException)_ehCaught;
              v13 = _cv_1;
              v14 = v5;
              v19 = v13;
              _pc = 2;
              continue _sm;
            case 2:
              Utility.closeQuietly(v2);
              Utility.disconnectQuietly(v14);
              _pc = 18;
              continue _sm;
            case 3:
              if ( !(_ehCaught instanceof java.net.URISyntaxException) ) { _pc = 5; continue _sm; }
              _cv_2 = (java.net.URISyntaxException)_ehCaught;
              v22 = _cv_2;
              v23 = v5;
              v19 = v22;
              _pc = 4;
              continue _sm;
            case 4:
              Utility.closeQuietly(v2);
              Utility.disconnectQuietly(v23);
              _pc = 18;
              continue _sm;
            case 5:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 6; continue _sm; }
              _cv_3 = (Throwable)_ehCaught;
              v3 = v2;
              v25 = _cv_3;
              v26 = v5;
              v27 = v25;
              _pc = 16;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
              Utility.closeQuietly(v2);
              Utility.disconnectQuietly(v5);
              v19 = v18;
              _ehCatchPc = 13;
              _pc = 12;
              continue _sm;
            case 8:
              _ehCatchPc = 13;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 9; continue _sm; }
              _cv_4 = (java.io.IOException)_ehCaught;
              v2 = null;
              v33 = _cv_4;
              v14 = v5;
              v19 = v33;
              _pc = 2;
              continue _sm;
            case 9:
              if ( !(_ehCaught instanceof java.net.URISyntaxException) ) { _pc = 10; continue _sm; }
              _cv_5 = (java.net.URISyntaxException)_ehCaught;
              v2 = null;
              v31 = _cv_5;
              v23 = v5;
              v19 = v31;
              _pc = 4;
              continue _sm;
            case 10:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 11; continue _sm; }
              _cv_6 = (Throwable)_ehCaught;
              v29 = _cv_6;
              v26 = v5;
              v27 = v29;
              _pc = 16;
              continue _sm;
            case 11:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 12:
              _ehCatchPc = -1;
              _pc = 18;
              continue _sm;
            case 13:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 14; continue _sm; }
              _cv_7 = (java.io.IOException)_ehCaught;
              v19 = _cv_7;
              v2 = null;
              v14 = null;
              _pc = 2;
              continue _sm;
            case 14:
              if ( !(_ehCaught instanceof java.net.URISyntaxException) ) { _pc = 15; continue _sm; }
              _cv_8 = (java.net.URISyntaxException)_ehCaught;
              v19 = _cv_8;
              v2 = null;
              v23 = null;
              _pc = 4;
              continue _sm;
            case 15:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 17; continue _sm; }
              _cv_9 = (Throwable)_ehCaught;
              v27 = _cv_9;
              v26 = null;
              _pc = 16;
              continue _sm;
            case 16:
              Utility.closeQuietly((java.io.Closeable)v3);
              Utility.disconnectQuietly(v26);
              throw com.gameloft.android.DecompRT.sneakyThrow(v27);
            case 17:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 18:
              if ( v4 != 0 )
              issueResponse(p0, v19, (android.graphics.Bitmap)v3, false);
              return;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    public static void downloadAsync(com.facebook.internal.ImageRequest p0)
    {
      com.facebook.internal.ImageDownloader$RequestKey v1;
      java.util.Map v2;
      com.facebook.internal.ImageDownloader$DownloaderContext v3;
      if ( p0 == null )
        return;
      v1 = new com.facebook.internal.ImageDownloader$RequestKey(p0.getImageUri(), p0.getCallerTag());
      v2 = pendingRequests;
      synchronized ( v2 )
      {
        v3 = (com.facebook.internal.ImageDownloader$DownloaderContext)pendingRequests.get(v1);
        if ( v3 != null )
        {
          v3.request = p0;
          v3.isCancelled = false;
          v3.workItem.moveToFront();
        }
        else
        {
          enqueueCacheRead(p0, v1, p0.isCachedRedirectAllowed());
        }
        return;
      }
    }

    private static void enqueueCacheRead(
            com.facebook.internal.ImageRequest p0,
            com.facebook.internal.ImageDownloader$RequestKey p1,
            boolean p2)
    {
      enqueueRequest(
        p0,
        p1,
        cacheReadQueue,
        (Runnable)new com.facebook.internal.ImageDownloader$CacheReadWorkItem(p0.getContext(), p1, p2));
    }

    private static void enqueueDownload(
            com.facebook.internal.ImageRequest p0,
            com.facebook.internal.ImageDownloader$RequestKey p1)
    {
      enqueueRequest(
        p0,
        p1,
        downloadQueue,
        (Runnable)new com.facebook.internal.ImageDownloader$DownloadImageWorkItem(p0.getContext(), p1));
    }

    private static void enqueueRequest(
            com.facebook.internal.ImageRequest p0,
            com.facebook.internal.ImageDownloader$RequestKey p1,
            com.facebook.internal.WorkQueue p2,
            Runnable p3)
    {
      java.util.Map v4;
      com.facebook.internal.ImageDownloader$DownloaderContext v5;
      v4 = pendingRequests;
      synchronized ( v4 )
      {
        v5 = new com.facebook.internal.ImageDownloader$DownloaderContext(null);
        v5.request = p0;
        pendingRequests.put(p1, v5);
        v5.workItem = p2.addActiveWorkItem(p3);
      }
    }

    private static synchronized android.os.Handler getHandler()
    {
      if ( handler == null )
        handler = new android.os.Handler(Looper.getMainLooper());
      return handler;
    }

    private static void issueResponse(
            com.facebook.internal.ImageDownloader$RequestKey p0,
            Exception p1,
            android.graphics.Bitmap p2,
            boolean p3)
    {
      com.facebook.internal.ImageDownloader$DownloaderContext v4; // RETVAL
      com.facebook.internal.ImageRequest request;
      com.facebook.internal.ImageRequest$Callback Callback;
      v4 = removePendingRequest(p0);
      if ( v4 != null && !v4.isCancelled )
      {
        request = v4.request;
        Callback = request.getCallback();
        if ( Callback != null )
          getHandler().post((Runnable)new com.facebook.internal.ImageDownloader$1(request, p1, p3, p2, Callback));
      }
    }

    public static void prioritizeRequest(com.facebook.internal.ImageRequest p0)
    {
      com.facebook.internal.ImageDownloader$RequestKey v1;
      java.util.Map v2;
      com.facebook.internal.ImageDownloader$DownloaderContext v3;
      v1 = new com.facebook.internal.ImageDownloader$RequestKey(p0.getImageUri(), p0.getCallerTag());
      v2 = pendingRequests;
      synchronized ( v2 )
      {
        v3 = (com.facebook.internal.ImageDownloader$DownloaderContext)pendingRequests.get(v1);
        if ( v3 != null )
          v3.workItem.moveToFront();
      }
    }

    private static void readFromCache(
            com.facebook.internal.ImageDownloader$RequestKey p0,
            android.content.Context p1,
            boolean p2)
    {
      java.net.URI RedirectedUri; // RETVAL
      java.io.InputStream CachedImageStream;
      boolean v5;
      android.graphics.Bitmap v6; // RETVAL
      com.facebook.internal.ImageDownloader$DownloaderContext v7; // RETVAL
    
      if ( p2 && (RedirectedUri = UrlRedirectCache.getRedirectedUri(p1, p0.uri)) != null )
      {
        CachedImageStream = ImageResponseCache.getCachedImageStream(RedirectedUri, p1);
        v5 = CachedImageStream != null;
      }
      else
      {
        v5 = false;
        CachedImageStream = null;
      }
      if ( !v5 )
        CachedImageStream = ImageResponseCache.getCachedImageStream(p0.uri, p1);
      if ( CachedImageStream != null )
      {
        v6 = BitmapFactory.decodeStream(CachedImageStream);
        Utility.closeQuietly(CachedImageStream);
        issueResponse(p0, null, v6, v5);
      }
      else
      {
        v7 = removePendingRequest(p0);
        if ( v7 != null && !v7.isCancelled )
          enqueueDownload(v7.request, p0);
      }
    }

    private static com.facebook.internal.ImageDownloader$DownloaderContext removePendingRequest(
            com.facebook.internal.ImageDownloader$RequestKey p0)
    {
      java.util.Map v1;
      v1 = pendingRequests;
      synchronized ( v1 )
      {
        return (com.facebook.internal.ImageDownloader$DownloaderContext)pendingRequests.remove(p0);
      }
    }

}
