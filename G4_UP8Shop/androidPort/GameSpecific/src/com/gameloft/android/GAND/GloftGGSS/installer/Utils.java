// Decompiled from classes.dex (SourceFile: Utils.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

import android.widget.Toast;
public class Utils {
    // Fields
    static java.util.HashMap a;

    // Methods
    static
    {
      a = new java.util.HashMap();
    }

    public Utils()
    {
      super();
    }

    public static void clearPreference(android.content.Context p0, String p1)
    {
      android.content.SharedPreferences.Editor v2;
      v2 = p0.getSharedPreferences(p1, 0).edit();
      v2.clear();
      v2.commit();
    }

    public static boolean getPreferenceBoolean(android.content.Context p0, String p1, String p2, boolean p3)
    {
      return p0.getSharedPreferences(p1, 0).getBoolean(p2, p3);
    }

    public static boolean getPreferenceExists(android.content.Context p0, String p1, String p2)
    {
      return p0.getSharedPreferences(p1, 0).contains(p2);
    }

    public static int getPreferenceInt(android.content.Context p0, String p1, String p2, int p3)
    {
      return p0.getSharedPreferences(p1, 0).getInt(p2, p3);
    }

    public static long getPreferenceLong(android.content.Context p0, String p1, String p2, long p3)
    {
      return Long.valueOf(p0.getSharedPreferences(p1, 0).getLong(p2, p3)).longValue();
    }

    public static String getPreferenceString(android.content.Context p0, String p1, String p2)
    {
      return p0.getSharedPreferences(p1, 0).getString(p2, "");
    }

    public static String getSplitName(String p0)
    {
      int v3;
      if ( p0.contains(".split_") )
      {
        v3 = 0;
        try
        {
          return p0.substring(0, p0.lastIndexOf(46));
        }
        catch ( Exception e )
        {
          return "";
        }
      }
      else
      {
        return "";
      }
    }

    public static int getSplitNumber(String p0)
    {
      int v1;
      v1 = -1;
      if ( p0.contains(".split_") )
      {
        try
        {
          return Integer.parseInt(p0.substring(p0.lastIndexOf(95) + 1));
        }
        catch ( Exception e )
        {
        }
      }
      return v1;
    }

    public static synchronized boolean hasBeenDownloaded(
            com.gameloft.android.GAND.GloftGGSS.installer.utils.i p0,
            boolean p1)
    {
      try
      {
        return TimePass.b.containsKey(p0.a() + p0.b());
      }
      catch ( Exception e )
      {
        return false;
      }
      finally
      {
      }
    }

    public static synchronized void markAsNotDownloaded(com.gameloft.android.GAND.GloftGGSS.installer.utils.i p0)
    {
      try
      {
        TimePass.b.remove(p0.a() + p0.b());
      }
      catch ( Exception e )
      {
      }
      finally
      {
      }
      TimePass.c = true;
    }

    public static synchronized void markAsSaved(com.gameloft.android.GAND.GloftGGSS.installer.utils.i p0)
    {
      java.io.BufferedWriter v1;
      String v2;
      try
      {
        if ( !hasBeenDownloaded(p0, false) )
        {
          v1 = new java.io.BufferedWriter(new java.io.FileWriter(GameInstaller.sd_folder + "/d_o_w_n_l_o_a_d_e_d.txt", true));
          v2 = p0.a() + p0.b();
          v1.write(v2 + "\n");
          v1.close();
          TimePass.b.put(v2, v2);
        }
      }
      catch ( Exception e )
      {
      }
      finally
      {
      }
    }

    public static synchronized void requestResetDownloadedFile()
    {
      java.io.BufferedWriter v0;
      java.util.Iterator i;
      if ( TimePass.c )
      {
        try
        {
          try
          {
            v0 = new java.io.BufferedWriter(new java.io.FileWriter(GameInstaller.sd_folder + "/d_o_w_n_l_o_a_d_e_d.txt", false));
            for ( i = TimePass.b.entrySet().iterator();
                  i.hasNext();
                  v0.write((String)((java.util.Map.Entry)i.next()).getKey() + "\n") )
            {
              ;
            }
            v0.close();
          }
          catch ( Exception e )
          {
          }
          TimePass.c = false;
        }
        finally
        {
        }
      }
    }

    public static void setPreference(android.content.Context p0, String p1, String p2, Object p3)
    {
      android.content.SharedPreferences.Editor v4; // RETVAL
      android.content.SharedPreferences.Editor v5;
      v4 = p0.getSharedPreferences(p1, 0).edit();
      v5 = v4;
      if ( p3 instanceof String )
      {
        v4.putString(p2, (String)p3);
      }
      else if ( p3 instanceof Integer )
      {
        v4.putInt(p2, ((Integer)p3).intValue());
      }
      else if ( p3 instanceof Boolean )
      {
        v4.putBoolean(p2, ((Boolean)p3).booleanValue());
      }
      else if ( p3 instanceof Long )
      {
        v4.putLong(p2, ((Long)p3).longValue());
      }
      v5.commit();
    }

    public static void showAllTimers(boolean p0)
    {
      java.util.Iterator i;
      for ( i = a.entrySet().iterator(); i.hasNext(); ((java.util.Map.Entry)i.next()).getValue() )
        ;
    }

    public static void showDialog(android.content.Context p0, String p1)
    {
      Toast.makeText(p0, p1, 0).show();
    }

    public static void showDialog(android.content.Context p0, String p1, int p2)
    {
      Toast.makeText(p0, p1, p2).show();
    }

    public static void showTimer(String p0, int p1, int p2)
    {
      if ( a.containsKey(p0) )
        a.get(p0);
    }

    public static void showTimer(String p0, boolean p1)
    {
      if ( a.containsKey(p0) )
        a.get(p0);
    }

    public static void triggerEndTimer(String p0)
    {
      if ( a.containsKey(p0) )
        ((com.gameloft.android.GAND.GloftGGSS.installer.TimePass)a.get(p0)).a(Long.valueOf(System.currentTimeMillis()));
    }

    public static void triggerStartTimer(String p0)
    {
      if ( a.containsKey(p0) )
        ((com.gameloft.android.GAND.GloftGGSS.installer.TimePass)a.get(p0)).a(Long.valueOf(System.currentTimeMillis()));
      else
        a.put(p0, new com.gameloft.android.GAND.GloftGGSS.installer.TimePass(Long.valueOf(System.currentTimeMillis())));
    }

    public static void windowFullScreen(android.app.Activity p0)
    {
      if ( p0 != null )
      {
        p0.getWindow().setFlags(1024, 1024);
        p0.requestWindowFeature(1);
      }
    }

}
