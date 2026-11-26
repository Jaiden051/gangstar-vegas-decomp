// Decompiled from classes.dex (SourceFile: ed.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.content.pm.PackageInfo;
import android.net.Uri;
import android.os.Build;
import java.util.Locale;
public final class ed {
    // Fields
    public final int a;
    public final boolean b;
    public final boolean c;
    public final java.lang.String d;
    public final java.lang.String e;
    public final boolean f;
    public final boolean g;
    public final boolean h;
    public final java.lang.String i;
    public final java.lang.String j;
    public final int k;
    public final int l;
    public final int m;
    public final int n;
    public final int o;
    public final int p;
    public final float q;
    public final int r;
    public final int s;
    public final double t;
    public final boolean u;
    public final boolean v;
    public final int w;

    // Methods
    public ed(android.content.Context p0)
    {
      super();
      boolean v2;
      android.media.AudioManager v3;
      android.net.ConnectivityManager v4;
      android.util.DisplayMetrics DisplayMetrics;
      java.util.Locale Default;
      android.content.pm.PackageManager PackageManager;
      android.telephony.TelephonyManager v8;
      android.content.Intent v9;
      int IntExtra;
      v2 = true;
      v3 = (android.media.AudioManager)p0.getSystemService("audio");
      v4 = (android.net.ConnectivityManager)p0.getSystemService("connectivity");
      DisplayMetrics = p0.getResources().getDisplayMetrics();
      Default = Locale.getDefault();
      PackageManager = p0.getPackageManager();
      v8 = (android.telephony.TelephonyManager)p0.getSystemService("phone");
      v9 = com.gameloft.android.GAND.GloftGGSS.CompatUtil.registerReceiverCompat(p0, null, new android.content.IntentFilter("android.intent.action.BATTERY_CHANGED"));
      this.a = v3.getMode();
      this.b = a(PackageManager, "geo:0,0?q=donuts") != null;
      this.c = a(PackageManager, "http://www.google.com") != null;
      this.d = v8.getNetworkOperator();
      this.e = Default.getCountry();
      this.f = eu.bQ();
      this.g = v3.isMusicActive();
      this.h = v3.isSpeakerphoneOn();
      this.i = Default.getLanguage();
      this.j = a(PackageManager);
      this.k = v3.getStreamVolume(3);
      this.l = a(p0, v4, PackageManager);
      this.m = v8.getNetworkType();
      this.n = v8.getPhoneType();
      this.o = v3.getRingerMode();
      this.p = v3.getStreamVolume(2);
      this.q = DisplayMetrics.density;
      this.r = DisplayMetrics.widthPixels;
      this.s = DisplayMetrics.heightPixels;
      if ( v9 != null )
      {
        IntExtra = v9.getIntExtra("status", -1);
        this.t = (float)v9.getIntExtra("level", -1) / (float)v9.getIntExtra("scale", -1);
        if ( IntExtra != 2 )
          v2 = IntExtra == 5;
        this.u = v2;
      }
      else
      {
        this.t = -1.0;
        this.u = false;
      }
      if ( Build.VERSION.SDK_INT < 16 )
      {
        this.v = false;
        this.w = -1;
      }
      else
      {
        this.v = v4.isActiveNetworkMetered();
        if ( v4.getActiveNetworkInfo() != null )
          this.w = v4.getActiveNetworkInfo().getDetailedState().ordinal();
        else
          this.w = -1;
      }
    
    }

    private static int a(
            android.content.Context p0,
            android.net.ConnectivityManager p1,
            android.content.pm.PackageManager p2)
    {
      int v3;
      android.net.NetworkInfo ActiveNetworkInfo; // RETVAL
    
      v3 = -2;
      if ( ep.a(p2, p0.getPackageName(), "android.permission.ACCESS_NETWORK_STATE") )
      {
        ActiveNetworkInfo = p1.getActiveNetworkInfo();
        if ( ActiveNetworkInfo != null )
          return ActiveNetworkInfo.getType();
        else
          return -1;
      }
      return v3;
    }

    private static android.content.pm.ResolveInfo a(android.content.pm.PackageManager p0, String p1)
    {
      return p0.resolveActivity(new android.content.Intent("android.intent.action.VIEW", Uri.parse(p1)), 0x10000);
    }

    private static String a(android.content.pm.PackageManager p0)
    {
      String v1;
      android.content.pm.ResolveInfo v2; // RETVAL
      android.content.pm.ActivityInfo v4;
      android.content.pm.PackageInfo PackageInfo; // RETVAL
    
      v1 = null;
      v2 = a(p0, "market://details?id=com.google.android.gms.ads");
      if ( v2 == null )
        return v1;
      v4 = v2.activityInfo;
      if ( v4 != null )
      {
        try
        {
          PackageInfo = p0.getPackageInfo(v4.packageName, 0);
          if ( PackageInfo != null )
            return PackageInfo.versionCode + "." + v4.packageName;
          return v1;
        }
        catch ( android.content.pm.PackageManager.NameNotFoundException e )
        {
        }
      }
      return v1;
    }

}
