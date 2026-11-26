// Decompiled from classes.dex (SourceFile: GLOfflineAdFullScreenManager.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

import java.io.File;
class GLOfflineAdFullScreenManager {
    // Fields
    private static boolean a;
    private static int b;
    private static boolean c;
    private static java.lang.String d;
    private static java.lang.String e;

    // Methods
    static
    {
      a = false;
      c = false;
      d = "/glads/offline/fullscreen/";
      e = "ads/interstitials/";
    }

    GLOfflineAdFullScreenManager()
    {
      super();
    }

    public static void cancelCurrentDownloads()
    {
      c = true;
    }

    private static void deleteDirWithSubdirs(java.io.File p0)
    {
      String[] v1; // RETVAL
      int i;
      java.io.File v3;
      try
      {
        if ( p0.isDirectory() )
        {
          v1 = p0.list();
          for ( i = 0; i < v1.length; ++i )
            GLOfflineAdFullScreenManager.deleteDirWithSubdirs(new java.io.File(p0, v1[i]));
        }
        v3 = new java.io.File(p0.getAbsolutePath() + System.currentTimeMillis());
        p0.renameTo(v3);
        v3.delete();
      }
      catch ( Exception e )
      {
      }
    }

    public static void downloadAdFullscreenWithIdArray(org.json.JSONArray p0, int p1)
    {
      b = p1;
      if ( !a )
      {
        a = true;
        removeFullscreensExcludingIdsInArray(p0);
        downloadFullscreensOnMainThreadWithIdArray(p0);
      }
    }

    private static void downloadFullscreensOnMainThreadWithIdArray(org.json.JSONArray p0)
    {
      int i = 0;
      org.json.JSONObject v2 = null;
      String v3 = null;
      String v4 = null;
      String File = null; // RETVAL
      String Value = null;
      org.apache.http.client.HttpClient v7 = null;
      org.apache.http.client.methods.HttpGet v8 = null;
      org.apache.http.HttpResponse v9 = null;
      org.apache.http.Header FirstHeader = null; // RETVAL
      java.io.BufferedReader v11 = null;
      StringBuffer j = null;
      String Line = null; // RETVAL
      String v14 = null;
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
              if ( !(p0.length() > 0) ) { _pc = 10; continue _sm; }
              c = false;
              i = 0;
              _pc = 1;
              continue _sm;
            case 1:
              if ( i >= p0.length() || c )
              {
              a = false;
              return;
              }
              v2 = p0.optJSONObject(i);
              v3 = v2.optString("id");
              v4 = v2.optString("URL");
              File = readFile(Utils.getContext().getFilesDir().getAbsolutePath() + d + v3 + "/" + v3 + "_" + b + ".tag");
              Value = File;
              _ehCatchPc = 6;
              v7 = new org.apache.http.impl.client.DefaultHttpClient();
              v8 = new org.apache.http.client.methods.HttpGet(v4);
              if ( File != null )
              v8.addHeader("If-None-Match", File);
              _ehCatchPc = 2;
              v9 = v7.execute(v8);
              if ( v9.getStatusLine().getStatusCode() == 200 )
              {
              FirstHeader = v9.getFirstHeader("Etag");
              if ( FirstHeader != null )
              Value = FirstHeader.getValue();
              else
              Value = null;
              if ( Value == null )
              Value = "";
              v11 = new java.io.BufferedReader(new java.io.InputStreamReader(v9.getEntity().getContent()));
              for ( j = new StringBuffer(""); ; j.append(Line + "\n") )
              {
              Line = v11.readLine();
              if ( Line == null )
              break;
              }
              v11.close();
              v14 = j.toString();
              }
              else
              {
              v14 = null;
              Value = null;
              }
              _ehCatchPc = 6;
              _pc = 5;
              continue _sm;
            case 2:
              _ehCatchPc = 6;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 4; continue _sm; }
              Value = null;
              _pc = 3;
              continue _sm;
            case 3:
              v14 = null;
              _pc = 5;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              _ehCatchPc = -1;
              _pc = 8;
              continue _sm;
            case 6:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 7; continue _sm; }
              _pc = 3;
              continue _sm;
            case 7:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 8:
              if ( v14 != null )
              {
              writeFile(d + v3, v3 + "_" + b + ".html", v14);
              writeFile(d + v3, v3 + "_" + b + ".tag", Value);
              }
              _pc = 9;
              continue _sm;
            case 9:
              ++i;
              _pc = 1;
              continue _sm;
            case 10:
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

    private static boolean existFullscreenForID(String p0)
    {
      return new java.io.File(Utils.getContext().getFilesDir().getAbsolutePath() + d + p0, p0 + "_" + b + ".html").exists();
    }

    private static String[] getAllEmbeddedFullScreenAd()
    {
      try
      {
        return Utils.getContext().getAssets().list(e + getInterstitialSize());
      }
      catch ( java.io.IOException e )
      {
        return new String[0];
      }
    }

    private static String[] getAllOfflineFullscreens()
    {
      java.util.ArrayList v0;
      java.io.File v1;
      String[] v2;
      int v3;
      int i;
      Object v5;
      v0 = new java.util.ArrayList();
      v1 = new java.io.File(Utils.getContext().getFilesDir().getAbsolutePath() + d);
      if ( v1.exists() )
      {
        v2 = v1.list();
        v3 = v2.length;
        for ( i = 0; i < v3; ++i )
        {
          v5 = v2[i];
          if ( existFullscreenForID((String)v5) )
            v0.add(v5);
        }
      }
      return (String[])v0.toArray(new String[0]);
    }

    public static String getContentForEmbeddedFullScreenAd(int p0)
    {
      String[] AllEmbeddedFullScreenAd; // RETVAL
      String EmbeddedFile;
      String v4;
      AllEmbeddedFullScreenAd = getAllEmbeddedFullScreenAd();
      if ( AllEmbeddedFullScreenAd.length == 0 )
        return "";
      v4 = AllEmbeddedFullScreenAd[new java.util.Random().nextInt(AllEmbeddedFullScreenAd.length)];
      EmbeddedFile = readEmbeddedFile(e + getInterstitialSize() + "/" + v4 + "/" + v4 + "_" + GLAds.w[b] + ".html");
      if ( EmbeddedFile == null )
        EmbeddedFile = readEmbeddedFile(e + getInterstitialSize() + "/" + v4 + "/" + v4 + "_" + GLAds.w[0] + ".html");
      if ( EmbeddedFile == null )
        return "";
      return EmbeddedFile;
    }

    public static String getContentForFullScreenAd(int p0)
    {
      String[] AllOfflineFullscreens; // RETVAL
      String File;
      String v4;
      AllOfflineFullscreens = getAllOfflineFullscreens();
      if ( AllOfflineFullscreens.length == 0 )
        return "";
      v4 = AllOfflineFullscreens[new java.util.Random().nextInt(AllOfflineFullscreens.length)];
      File = readFile(Utils.getContext().getFilesDir().getAbsolutePath() + d + v4 + "/" + v4 + "_" + b + ".html");
      if ( File == null )
        return "";
      return File;
    }

    private static String getInterstitialSize()
    {
      android.view.Display DefaultDisplay;
      int v1; // RETVAL
    
      DefaultDisplay = ((android.view.WindowManager)Utils.getContext().getSystemService("window")).getDefaultDisplay();
      Math.max(DefaultDisplay.getHeight(), DefaultDisplay.getWidth());
      v1 = Math.min(DefaultDisplay.getHeight(), DefaultDisplay.getWidth());
      if ( v1 <= 320 )
        return "tiny";
      if ( v1 <= 640 )
        return "small";
      if ( v1 <= 768 )
        return "medium";
      if ( v1 > 1080 )
        return "xlarge";
      return "large";
    }

    private static String readEmbeddedFile(String p0)
    {
      String v1;
      java.io.InputStream v2;
      byte[] v3;
      int v4; // RETVAL
    
      v1 = "";
      try
      {
        v2 = Utils.getContext().getAssets().open(p0);
        v3 = new byte[1024000];
        while ( true )
        {
          v4 = v2.read(v3);
          if ( v4 == -1 )
            break;
          if ( v4 == 1024000 )
            v1 = v1 + new String(v3);
          else
            v1 = v1 + new String(v3).substring(0, v4);
        }
        v2.close();
        return v1;
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    private static String readFile(String p0)
    {
      String v1;
      java.io.FileReader v2;
      char[] v3;
      int v4; // RETVAL
    
      v1 = "";
      try
      {
        v2 = new java.io.FileReader(new java.io.File(p0));
        v3 = new char[1024000];
        while ( true )
        {
          v4 = v2.read(v3);
          if ( v4 == -1 )
            break;
          if ( v4 == 1024000 )
            v1 = v1 + new String(v3);
          else
            v1 = v1 + new String(v3).substring(0, v4);
        }
        v2.close();
        return v1;
      }
      catch ( java.io.FileNotFoundException e )
      {
        return null;
      }
      catch ( java.io.IOException e )
      {
        return null;
      }
    }

    private static void removeFullscreensExcludingIdsInArray(org.json.JSONArray p0)
    {
      String[] AllOfflineFullscreens;
      int v2;
      int i;
      String v4;
      int v5;
      int v6;
      AllOfflineFullscreens = getAllOfflineFullscreens();
      v2 = AllOfflineFullscreens.length;
      for ( i = 0; i < v2; ++i )
      {
        v4 = AllOfflineFullscreens[i];
        v5 = 0;
        v6 = 0;
        while ( v5 < p0.length() )
        {
          try
          {
            if ( v4.equals(p0.getJSONObject(v5).optString("id")) )
              v6 = 1;
          }
          catch ( org.json.JSONException e )
          {
          }
          ++v5;
        }
        if ( v6 == 0 )
          removeFullscreensForID(v4);
      }
    }

    private static void removeFullscreensForID(String p0)
    {
      deleteDirWithSubdirs(new java.io.File(Utils.getContext().getFilesDir().getAbsolutePath() + d + p0));
    }

    public static void setLangIndex(int p0)
    {
      b = p0;
    }

    private static void writeFile(String p0, String p1, String p2)
    {
      java.io.File v3;
      java.io.File v4;
      java.io.FileWriter v5;
      try
      {
        v3 = new java.io.File(Utils.getContext().getFilesDir().getAbsolutePath() + p0);
        v3.mkdirs();
        v4 = new java.io.File(v3, p1);
        if ( p2 != null )
        {
          v5 = new java.io.FileWriter(v4, false);
          v5.write(p2);
          v5.flush();
          v5.close();
        }
        else
        {
          v4.delete();
        }
      }
      catch ( java.io.IOException e )
      {
      }
    }

}
