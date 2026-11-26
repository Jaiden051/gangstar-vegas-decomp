// Decompiled from classes.dex (SourceFile: Utils.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Encrypter;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import com.gameloft.android.GAND.GloftGGSS.InGameBrowser;
class Utils {
    // Methods
    Utils()
    {
      super();
    }

    public static String crypt(String p0)
    {
      return Encrypter.crypt(p0);
    }

    public static String getAndroidId()
    {
      return Device.getAndroidId();
    }

    public static String getConnectionType()
    {
      if ( SUtils.CheckConnectionType() == 1 )
        return "wifi";
      else
        return "cellular";
    }

    public static android.content.Context getContext()
    {
      if ( GLAds.getParentView() != null )
        return GLAds.getParentView().getContext();
      else
        return SUtils.getContext();
    }

    public static String getDeviceId()
    {
      return Device.getDeviceId();
    }

    public static String getGameCode()
    {
      return "GGSS";
    }

    public static String getGameVersion()
    {
      return "1.8.2f";
    }

    public static String getGoogleAdId()
    {
      return Device.getGoogleAdId();
    }

    public static int getGoogleAdIdStatus()
    {
      return Device.getGoogleAdIdStatus();
    }

    public static String getHDIDFV()
    {
      return Device.getHDIDFV();
    }

    public static String getNetworkCountryIso()
    {
      return Device.getNetworkCountryIso();
    }

    public static String getNetworkOperator()
    {
      return Device.getNetworkOperator();
    }

    public static void openInGameBrowserWithUrl(String p0)
    {
      InGameBrowser.a = GLAds.getLgIdx();
      InGameBrowser.b = GLAds.getAnonymous();
      InGameBrowser.c = GLAds.getFbId();
      InGameBrowser.d = GLAds.getGlAcc();
      InGameBrowser.showInGameBrowserWithUrl(p0);
    }

    public static String readFile(String p0, String p1)
    {
      String v2;
      java.io.File v3;
      java.io.FileReader v4;
      char[] v5;
      int v6; // RETVAL
    
      v2 = "";
      try
      {
        v3 = new java.io.File(getContext().getFilesDir().getAbsolutePath() + p0);
        v3.mkdirs();
        v4 = new java.io.FileReader(new java.io.File(v3, p1));
        v5 = new char[1024000];
        while ( true )
        {
          v6 = v4.read(v5);
          if ( v6 == -1 )
            break;
          if ( v6 == 1024000 )
            v2 = v2 + new String(v5);
          else
            v2 = v2 + new String(v5).substring(0, v6);
        }
        v4.close();
        return v2;
      }
      catch ( java.io.FileNotFoundException e )
      {
        return null;
      }
      catch ( java.io.IOException e )
      {
        return null;
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    public static void writeFile(String p0, String p1, String p2)
    {
      java.io.File v3;
      java.io.File v4;
      java.io.FileWriter v5;
      try
      {
        v3 = new java.io.File(getContext().getFilesDir().getAbsolutePath() + p0);
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
