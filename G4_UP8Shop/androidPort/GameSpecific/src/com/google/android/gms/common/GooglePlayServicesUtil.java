// Decompiled from classes.dex (SourceFile: GooglePlayServicesUtil.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common;

import android.app.PendingIntent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.res.Resources;
import android.os.Build;
import android.text.TextUtils;
import android.util.Base64;
import android.util.Log;
import com.google.android.gms.R$string;
import com.google.android.gms.internal.hf;
import com.google.android.gms.internal.ij;
import com.google.android.gms.internal.iq;
import java.security.Signature;
import java.security.cert.CertificateFactory;
import java.util.Arrays;
public final class GooglePlayServicesUtil {
    // Fields
    public static java.lang.String a;
    public static int b;
    public static java.lang.String c;
    public static java.lang.String d;
    static final byte[][] e;
    static final byte[][] f;
    static final byte[][] g;
    static final byte[][] h;
    static final byte[][] i;
    static final byte[][] j;
    static final byte[][] k;
    static final byte[][] l;
    public static boolean m;
    public static boolean n;
    private static final byte[][] o;
    private static final byte[][] p;
    private static int q;
    private static final java.lang.Object r;

    // Methods
    static
    {
      byte[][] v0;
      byte[][] v1;
      byte[][] v2;
      byte[][] v3;
      byte[][] v4;
      byte[][] v5;
      byte[][] v6;
      byte[][] v7;
      byte[][][] v8;
      byte[][] v9;
      v0 = new byte[2][];
      v0[0] = au("0\u0082\u0004C0\u0082\u0003+ \u0003\u0002\u0001\u0002\u0002\t");
      v0[1] = au("0\u0082\u0004¨0\u0082\u0003\u0090 \u0003\u0002\u0001\u0002\u0002\t");
      e = (byte[][])v0;
      v1 = new byte[2][];
      v1[0] = au("0\u0082\u0002R0\u0082\u0001»\u0002\u0004I4\u0098~0\r\u0006\t*\u0086H\u0086÷\r\u0001\u0001\u0004\u0005");
      v1[1] = au("0\u0082\u0004¨0\u0082\u0003\u0090 \u0003\u0002\u0001\u0002\u0002\t");
      f = (byte[][])v1;
      v2 = new byte[1][];
      v2[0] = au("0\u0082\u0002§0\u0082\u0002e \u0003\u0002\u0001\u0002\u0002\u0004P\u0005|B0\u000b\u0006\u0007*\u0086HÎ8\u0004\u0003\u0005");
      g = (byte[][])v2;
      v3 = new byte[2][];
      v3[0] = au("0\u0082\u0004L0\u0082\u00034 \u0003\u0002\u0001\u0002\u0002\t");
      v3[1] = au("0\u0082\u0004L0\u0082\u00034 \u0003\u0002\u0001\u0002\u0002\t");
      h = (byte[][])v3;
      v4 = new byte[2][];
      v4[0] = au(
                "0\u0082\u0005a0\u0082\u0003K\u0002\u0006\u0001D\u009E\u0091\u0096Ó0\u000b\u0006\t*\u0086H\u0086÷\r\u0001\u0001\u00050v1\u000b0\t\u0006\u0003" +
                "U\u0004\u0006\u0013\u0002US1\u00130\u0011\u0006\u0003U\u0004\b\u0013\n" +
                "California1\u00160\u0014\u0006\u0003U\u0004\u0007\u0013\rMountain View1\u00140\u0012\u0006\u0003U\u0004\n" +
                "\u0013\u000bGoogle Inc.1\u00100\u000E\u0006\u0003U\u0004\u000b\u0013\u0007Android1\u00120\u0010\u0006\u0003U\u0004\u0003\u0013\tClockWork0\u001E\u0017\r" +
                "140307220225Z\u0017\r380119031407Z0v1\u000b0\t\u0006\u0003U\u0004\u0006\u0013\u0002US1\u00130\u0011\u0006\u0003U\u0004\b\u0013\n" +
                "California1\u00160\u0014\u0006\u0003U\u0004\u0007\u0013\rMountain View1\u00140\u0012\u0006\u0003U\u0004\n" +
                "\u0013\u000bGoogle Inc.1\u00100\u000E\u0006\u0003U\u0004\u000b\u0013\u0007Android1\u00120\u0010\u0006\u0003U\u0004\u0003\u0013\tClockWork0\u0082\u0002" +
                "\"0\r\u0006\t*\u0086H\u0086÷\r\u0001\u0001\u0001\u0005");
      v4[1] = au("0\u0082\u0003¿0\u0082\u0002§ \u0003\u0002\u0001\u0002\u0002\t");
      i = (byte[][])v4;
      v5 = new byte[2][];
      v5[0] = au(
                "0\u0082\u0003m0\u0082\u0002W\u0002\u0006\u0001=døÖ³0\u000b\u0006\t*\u0086H\u0086÷\r\u0001\u0001\u00050|1\u000b0\t\u0006\u0003U\u0004\u0006\u0013" +
                "\u0002US1\u00130\u0011\u0006\u0003U\u0004\b\u0013\n" +
                "California1\u00160\u0014\u0006\u0003U\u0004\u0007\u0013\rMountain View1\u00150\u0013\u0006\u0003U\u0004\n" +
                "\u0013\fGoogle, Inc.1\u00100\u000E\u0006\u0003U\u0004\u000b\u0013\u0007GoogleX1\u00170\u0015\u0006\u0003U\u0004\u0003\u0013\u000EGlass Platform0\u001E" +
                "\u0017\r130313181742Z\u0017\r380119031407Z0|1\u000b0\t\u0006\u0003U\u0004\u0006\u0013\u0002US1\u00130\u0011\u0006\u0003U\u0004\b\u0013\n" +
                "California1\u00160\u0014\u0006\u0003U\u0004\u0007\u0013\rMountain View1\u00150\u0013\u0006\u0003U\u0004\n" +
                "\u0013\fGoogle, Inc.1\u00100\u000E\u0006\u0003U\u0004\u000b\u0013\u0007GoogleX1\u00170\u0015\u0006\u0003U\u0004\u0003\u0013\u000EGlass Platform0\u0082" +
                "\u0001\"0\r\u0006\t*\u0086H\u0086÷\r\u0001\u0001\u0001\u0005");
      v5[1] = au("0\u0082\u0003É0\u0082\u0002± \u0003\u0002\u0001\u0002\u0002\t");
      j = (byte[][])v5;
      v6 = new byte[2][];
      v6[0] = au("0\u0082\u0003Á0\u0082\u0002© \u0003\u0002\u0001\u0002\u0002\t");
      v6[1] = au("0\u0082\u0003Á0\u0082\u0002© \u0003\u0002\u0001\u0002\u0002\t");
      k = (byte[][])v6;
      v7 = new byte[2][];
      v7[0] = au("0\u0082\u0003µ0\u0082\u0002\u009D \u0003\u0002\u0001\u0002\u0002\t");
      v7[1] = au("0\u0082\u0003µ0\u0082\u0002\u009D \u0003\u0002\u0001\u0002\u0002\t");
      l = (byte[][])v7;
      v8 = new byte[8][][];
      v8[0] = e;
      v8[1] = f;
      v8[2] = g;
      v8[3] = h;
      v8[4] = i;
      v8[5] = j;
      v8[6] = k;
      v8[7] = l;
      o = a(v8);
      v9 = (byte[][])new byte[7][];
      v9[0] = e[0];
      v9[1] = f[0];
      v9[2] = h[0];
      v9[3] = i[0];
      v9[4] = j[0];
      v9[5] = k[0];
      v9[6] = l[0];
      p = (byte[][])v9;
      m = false;
      n = false;
      q = -1;
      r = new Object();
    }

    private GooglePlayServicesUtil()
    {
      super();
    }

    public static android.content.Intent Z(int p0)
    {
      android.content.Intent v1;
      switch ( p0 )
      {
        case 1:
        case 2:
          v1 = hf.aD("com.google.android.gms");
          break;
        case 3:
          v1 = hf.aB("com.google.android.gms");
          break;
        case 12:
          v1 = hf.fv();
          break;
        default:
          v1 = null;
          break;
      }
      return v1;
    }

    private static android.app.Dialog a(
            int p0,
            android.app.Activity p1,
            android.support.v4.app.Fragment p2,
            int p3,
            android.content.DialogInterface.OnCancelListener p4)
    {
      android.util.TypedValue v5;
      android.app.AlertDialog.Builder v6;
      android.content.Intent v7; // RETVAL
      com.google.android.gms.internal.ha v8;
      String v9; // RETVAL
      android.app.AlertDialog v10;
      if ( iq.ga()
        && (com.gameloft.android.DecompRT.comma((v5 = new android.util.TypedValue()), com.gameloft.android.DecompRT.comma((p1.getTheme().resolveAttribute(16843529, v5, true)), ("Theme.Dialog.Alert".equals(p1.getResources().getResourceEntryName(v5.resourceId)))))) )
      {
        v6 = new android.app.AlertDialog.Builder(p1, 5);
      }
      else
      {
        v6 = null;
      }
      if ( v6 == null )
        v6 = new android.app.AlertDialog.Builder(p1);
      v6.setMessage(d(p1, p0));
      if ( p4 != null )
        v6.setOnCancelListener(p4);
      v7 = c(p1, p0);
      if ( p2 != null )
        v8 = new com.google.android.gms.internal.ha(p2, v7, p3);
      else
        v8 = new com.google.android.gms.internal.ha(p1, v7, p3);
      v9 = e(p1, p0);
      if ( v9 != null )
        v6.setPositiveButton(v9, (android.content.DialogInterface.OnClickListener)v8);
      switch ( p0 )
      {
        case 0:
          v10 = null;
          break;
        case 1:
          v10 = v6.setTitle(R$string.n).create();
          break;
        case 2:
          v10 = v6.setTitle(R$string.C).create();
          break;
        case 3:
          v10 = v6.setTitle(R$string.i).create();
          break;
        case 4:
        case 6:
          v10 = v6.create();
          break;
        case 5:
          Log.e(
            "GooglePlayServicesUtil",
            "An invalid account was specified when connecting. Please provide a valid account.");
          v10 = v6.setTitle(R$string.p).create();
          break;
        case 7:
          Log.e("GooglePlayServicesUtil", "Network error occurred. Please retry request later.");
          v10 = v6.setTitle(R$string.s).create();
          break;
        case 8:
          Log.e("GooglePlayServicesUtil", "Internal error occurred. Please see logs for detailed information");
          v10 = v6.create();
          break;
        case 9:
          Log.e("GooglePlayServicesUtil", "Google Play services is invalid. Cannot recover.");
          v10 = v6.setTitle(R$string.z).create();
          break;
        case 10:
          Log.e("GooglePlayServicesUtil", "Developer error occurred. Please see logs for detailed information");
          v10 = v6.create();
          break;
        case 11:
          Log.e("GooglePlayServicesUtil", "The application is not licensed to the user.");
          v10 = v6.create();
          break;
        case 12:
          Log.e("GooglePlayServicesUtil", "The date of the device is not valid.");
          v10 = v6.setTitle(R$string.z).create();
          break;
        default:
          Log.e("GooglePlayServicesUtil", "Unexpected error code " + p0);
          v10 = v6.create();
          break;
      }
      return v10;
    }

    public static boolean a(android.content.pm.PackageManager p0, android.content.pm.PackageInfo p1)
    {
      boolean v2;
      v2 = false;
      if ( p1 != null )
      {
        if ( c(p0) )
        {
          return a(p1, o) != null;
        }
        else
        {
          v2 = a(p1, p) != null;
          if ( !v2 && a(p1, o) != null )
            Log.w("GooglePlayServicesUtil", "Test-keys aren't accepted on this build.");
        }
      }
      return v2;
    }

    public static boolean a(android.content.res.Resources p0)
    {
      boolean v1;
      boolean v3;
      v1 = false;
      if ( p0 != null )
      {
        v3 = (p0.getConfiguration().screenLayout & 0xF) > 3;
        if ( iq.fX() && v3 )
          return true;
        if ( b(p0) )
          return true;
      }
      return v1;
    }

    private static byte[] a(android.content.pm.PackageInfo p0, byte[][] p1)
    {
      java.security.cert.CertificateFactory Instance;
      byte[] v5;
      java.io.ByteArrayInputStream v6;
      java.security.cert.X509Certificate v7;
      int i;
      byte[] v9;
      try
      {
        Instance = CertificateFactory.getInstance("X509");
        if ( p0.signatures.length != 1 )
        {
          Log.w("GooglePlayServicesUtil", "Package has more than one signature.");
          return null;
        }
        v5 = p0.signatures[0].toByteArray();
        v6 = new java.io.ByteArrayInputStream(v5);
        try
        {
          v7 = (java.security.cert.X509Certificate)Instance.generateCertificate(v6);
          try
          {
            v7.checkValidity();
            for ( i = 0; i < p1.length; ++i )
            {
              v9 = (byte[])p1[i];
              if ( Arrays.equals(v9, v5) )
                return (byte[])v9;
            }
            if ( Log.isLoggable("GooglePlayServicesUtil", 2) )
              Log.v("GooglePlayServicesUtil", "Signature not valid.  Found: \n" + Base64.encodeToString(v5, 0));
            return null;
          }
          catch ( java.security.cert.CertificateExpiredException e )
          {
            Log.w("GooglePlayServicesUtil", "Certificate has expired.");
            return null;
          }
          catch ( java.security.cert.CertificateNotYetValidException e )
          {
            Log.w("GooglePlayServicesUtil", "Certificate is not yet valid.");
            return null;
          }
        }
        catch ( java.security.cert.CertificateException e )
        {
          Log.w("GooglePlayServicesUtil", "Could not generate certificate.");
          return null;
        }
      }
      catch ( java.security.cert.CertificateException e )
      {
        Log.w("GooglePlayServicesUtil", "Could not get certificate instance.");
        return null;
      }
    }

    private static byte[][] a(byte[][][] p0)
    {
      int v1;
      int v2;
      int v3;
      byte[][] v4;
      int v5;
      int v6;
      int i;
      byte[][] v8;
      int v9;
      int j;
      v1 = p0.length;
      v2 = 0;
      v3 = 0;
      while ( v2 < v1 )
        v3 += p0[v2++].length;
      v4 = new byte[v3][];
      v5 = p0.length;
      v6 = 0;
      for ( i = 0; i < v5; ++i )
      {
        v8 = p0[i];
        v9 = v6;
        for ( j = 0; j < v8.length; ++j )
          v4[v9++] = v8[j];
        v6 = v9;
      }
      return v4;
    }

    private static byte[] au(String p0)
    {
      try
      {
        return p0.getBytes("ISO-8859-1");
      }
      catch ( java.io.UnsupportedEncodingException v2 )
      {
        throw new AssertionError(v2);
      }
    }

    public static boolean b(
            int p0,
            android.app.Activity p1,
            android.support.v4.app.Fragment p2,
            int p3,
            android.content.DialogInterface.OnCancelListener p4)
    {
      boolean v5;
      android.app.Dialog v6;
      v5 = false;
      v6 = a(p0, p1, p2, p3, p4);
      if ( v6 == null )
        return v5;
      try
      {
        v5 = p1 instanceof android.support.v4.app.FragmentActivity;
      }
      catch ( NoClassDefFoundError e )
      {
      }
      if ( v5 )
      {
        SupportErrorDialogFragment.newInstance(v6, p4).a(((android.support.v4.app.FragmentActivity)p1).c(), "GooglePlayServicesErrorDialog");
      }
      else
      {
        if ( !iq.fX() )
          throw new RuntimeException("This Activity does not support Fragments.");
        ErrorDialogFragment.newInstance(v6, p4).show(p1.getFragmentManager(), "GooglePlayServicesErrorDialog");
      }
      return true;
    }

    public static boolean b(android.content.pm.PackageManager p0)
    {
      boolean v1 = false;
      Object v2 = null;
      byte[][] v3 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = true;
            v2 = r;
            com.gameloft.android.DecompRT.monitorEnter(v2);
            if ( q == -1 )
            {
            try
            {
            v3 = (byte[][])new byte[1][];
            v3[0] = o[1];
            if ( a(p0.getPackageInfo("com.google.android.gms", 64), v3) != null )
            {
            q = 1;
            { _pc = 1; continue _sm; }
            }
            q = 0;
            }
            catch ( android.content.pm.PackageManager.NameNotFoundException e )
            {
            q = 0;
            }
            }
            _pc = 1;
            continue _sm;
          case 1:
            if ( q == 0 )
            return false;
            return v1;
        }
      }
}

    public static boolean b(android.content.pm.PackageManager p0, String p1)
    {
      int v2;
      v2 = 64;
      try
      {
        return a(p0, p0.getPackageInfo(p1, 64));
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        if ( Log.isLoggable("GooglePlayServicesUtil", 3) )
          Log.d("GooglePlayServicesUtil", "Package manager can't find package " + p1 + ", defaulting to false");
        return false;
      }
    }

    private static boolean b(android.content.res.Resources p0)
    {
      boolean v1;
      android.content.res.Configuration Configuration;
      v1 = false;
      Configuration = p0.getConfiguration();
      if ( iq.fZ() && (Configuration.screenLayout & 0xF) <= 3 )
        return Configuration.smallestScreenWidthDp >= 600;
      return v1;
    }

    public static android.content.Intent c(android.content.Context p0, int p1)
    {
      return Z(p1);
    }

    public static boolean c(android.content.pm.PackageManager p0)
    {
      return b(p0) || !et();
    }

    public static String d(android.content.Context p0, int p1)
    {
      android.content.res.Resources Resources; // RETVAL
      android.content.res.Resources v3;
      String String;
      Resources = p0.getResources();
      v3 = Resources;
      switch ( p1 )
      {
        case 1:
          if ( a(p0.getResources()) )
            String = v3.getString(R$string.m);
          else
            String = v3.getString(R$string.l);
          break;
        case 2:
          String = Resources.getString(R$string.B);
          break;
        case 3:
          String = Resources.getString(R$string.h);
          break;
        case 5:
          String = Resources.getString(R$string.o);
          break;
        case 7:
          String = Resources.getString(R$string.r);
          break;
        case 9:
          String = Resources.getString(R$string.y);
          break;
        case 12:
          String = Resources.getString(R$string.x);
          break;
        default:
          String = Resources.getString(R$string.w);
          break;
      }
      return String;
    }

    public static String e(android.content.Context p0, int p1)
    {
      android.content.res.Resources Resources; // RETVAL
      String String;
      Resources = p0.getResources();
      switch ( p1 )
      {
        case 1:
          String = Resources.getString(R$string.k);
          break;
        case 2:
          String = Resources.getString(R$string.A);
          break;
        case 3:
          String = Resources.getString(R$string.g);
          break;
        default:
          String = Resources.getString(17039370);
          break;
      }
      return String;
    }

    public static boolean et()
    {
      if ( m )
        return n;
      else
        return "user".equals(Build.TYPE);
    }

    public static String f(android.content.Context p0, int p1)
    {
      android.content.res.Resources Resources; // RETVAL
      String String;
      Resources = p0.getResources();
      switch ( p1 )
      {
        case 1:
          String = Resources.getString(R$string.t);
          break;
        case 2:
          String = Resources.getString(R$string.u);
          break;
        case 3:
          String = Resources.getString(R$string.q);
          break;
        case 5:
          String = Resources.getString(R$string.o);
          break;
        case 7:
          String = Resources.getString(R$string.r);
          break;
        case 9:
          String = Resources.getString(R$string.y);
          break;
        case 12:
          String = Resources.getString(R$string.x);
          break;
        default:
          String = Resources.getString(R$string.w);
          break;
      }
      return String;
    }

    public static android.app.Dialog getErrorDialog(int p0, android.app.Activity p1, int p2)
    {
      return getErrorDialog(p0, p1, p2, null);
    }

    public static android.app.Dialog getErrorDialog(
            int p0,
            android.app.Activity p1,
            int p2,
            android.content.DialogInterface.OnCancelListener p3)
    {
      return a(p0, p1, null, p2, p3);
    }

    public static android.app.PendingIntent getErrorPendingIntent(
            int p0,
            android.content.Context p1,
            int p2)
    {
      android.content.Intent v3; // RETVAL
    
      v3 = c(p1, p0);
      if ( v3 != null )
        return PendingIntent.getActivity(p1, p2, v3, 0x10000000);
      else
        return null;
    }

    public static String getErrorString(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case 0:
          v1 = "SUCCESS";
          break;
        case 1:
          v1 = "SERVICE_MISSING";
          break;
        case 2:
          v1 = "SERVICE_VERSION_UPDATE_REQUIRED";
          break;
        case 3:
          v1 = "SERVICE_DISABLED";
          break;
        case 4:
          v1 = "SIGN_IN_REQUIRED";
          break;
        case 5:
          v1 = "INVALID_ACCOUNT";
          break;
        case 6:
          v1 = "RESOLUTION_REQUIRED";
          break;
        case 7:
          v1 = "NETWORK_ERROR";
          break;
        case 8:
          v1 = "INTERNAL_ERROR";
          break;
        case 9:
          v1 = "SERVICE_INVALID";
          break;
        case 10:
          v1 = "DEVELOPER_ERROR";
          break;
        case 11:
          v1 = "LICENSE_CHECK_FAILED";
          break;
        case 12:
          v1 = "DATE_INVALID";
          break;
        default:
          v1 = "UNKNOWN_ERROR_CODE";
          break;
      }
      return v1;
    }

    public static String getOpenSourceSoftwareLicenseInfo(android.content.Context p0)
    {
      android.net.Uri v1;
      java.io.InputStream v2; // RETVAL
      java.io.InputStream v3;
      String v4;
      v1 = new android.net.Uri.Builder().scheme("android.resource").authority("com.google.android.gms").appendPath("raw").appendPath("oss_notice").build();
      try
      {
        v2 = p0.getContentResolver().openInputStream(v1);
        v3 = v2;
        try
        {
          v4 = new java.util.Scanner(v2).useDelimiter("\\A").next();
          if ( v3 != null )
            v3.close();
          return v4;
        }
        catch ( java.util.NoSuchElementException e )
        {
          if ( v2 != null )
            v2.close();
          return null;
        }
        catch ( Throwable v6 )
        {
          if ( v2 != null )
            v2.close();
          throw v6;
        }
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    public static android.content.Context getRemoteContext(android.content.Context p0)
    {
      try
      {
        return p0.createPackageContext("com.google.android.gms", 3);
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        return null;
      }
    }

    public static android.content.res.Resources getRemoteResource(android.content.Context p0)
    {
      try
      {
        return p0.getPackageManager().getResourcesForApplication("com.google.android.gms");
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        return null;
      }
    }

    public static int isGooglePlayServicesAvailable(android.content.Context p0)
    {
      int v1 = 0;
      android.content.pm.PackageManager PackageManager = null;
      android.content.pm.PackageInfo PackageInfo = null;
      android.content.pm.PackageInfo v5 = null;
      byte[][] v6 = null;
      byte[][] v7 = null;
      byte[][] v8 = null;
      byte[][] v9 = null;
      byte[] v10 = null; // RETVAL
      byte[][] v11 = null;
      int v12 = 0;
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
              v1 = 9;
              PackageManager = p0.getPackageManager();
              try
              {
              p0.getResources().getString(R$string.w);
              }
              catch ( Throwable e )
              {
              Log.e(
              "GooglePlayServicesUtil",
              "The Google Play services resources were not found. Check your project configuration to ensure that the resources are included.");
              }
              
              if ( System.currentTimeMillis() < 0x11DC17EED20L )
              return 12;
              x(p0);
              _ehCatchPc = 5;
              PackageInfo = PackageManager.getPackageInfo("com.google.android.gms", 64);
              if ( ij.aD(PackageInfo.versionCode) )
              {
              try
              {
              v5 = PackageManager.getPackageInfo(p0.getPackageName(), 64);
              if ( et() )
              {
              v8 = (byte[][])new byte[2][];
              v8[0] = e[0];
              v8[1] = j[0];
              if ( a(PackageInfo, v8) == null )
              {
              Log.w("GooglePlayServicesUtil", "Google Play services signature invalid (release key) on Glass.");
              return v1;
              }
              v9 = (byte[][])new byte[1][];
              v9[0] = j[0];
              if ( a(v5, v9) == null )
              {
              Log.w(
              "GooglePlayServicesUtil",
              "Calling package "
              + v5.packageName
              + " signature (release key) invalid on Glass.");
              return v1;
              }
              }
              else
              {
              v6 = (byte[][])new byte[2][];
              v6[0] = e[1];
              v6[1] = j[1];
              if ( a(PackageInfo, v6) == null )
              {
              Log.w("GooglePlayServicesUtil", "Google Play services signature (test key) invalid on Glass.");
              return v1;
              }
              v7 = (byte[][])new byte[2][];
              v7[0] = e[1];
              v7[1] = j[1];
              if ( a(v5, v7) == null )
              {
              Log.w(
              "GooglePlayServicesUtil",
              "Calling package "
              + v5.packageName
              + " signature (test key) invalid on Glass.");
              return v1;
              }
              }
              { _pc = 1; continue _sm; }
              }
              catch ( android.content.pm.PackageManager.NameNotFoundException e )
              {
              Log.w("GooglePlayServicesUtil", "Calling package info missing.");
              }
              return v1;
              }
              if ( ij.C(p0) )
              {
              if ( a(PackageInfo, e) == null )
              {
              Log.w("GooglePlayServicesUtil", "Google Play services signature invalid.");
              return v1;
              }
              { _pc = 1; continue _sm; }
              }
              _ehCatchPc = 2;
              v10 = a(PackageManager.getPackageInfo("com.android.vending", 64), e);
              if ( v10 == null )
              {
              Log.w("GooglePlayServicesUtil", "Google Play Store signature invalid.");
              return v1;
              }
              v11 = new byte[1][];
              v11[0] = v10;
              if ( a(PackageInfo, v11) == null )
              {
              Log.w("GooglePlayServicesUtil", "Google Play services signature invalid.");
              return v1;
              }
              _pc = 1;
              continue _sm;
            case 1:
              v12 = ij.aB(5077000);
              if ( ij.aB(PackageInfo.versionCode) < v12 )
              {
              Log.w(
              "GooglePlayServicesUtil",
              "Google Play services out of date.  Requires 5077000 but found " + PackageInfo.versionCode);
              return 2;
              }
              try
              {
              if ( (PackageManager.getApplicationInfo("com.google.android.gms", 0)).enabled )
              return 0;
              else
              return 3;
              }
              catch ( android.content.pm.PackageManager.NameNotFoundException v13 )
              {
              Log.wtf("GooglePlayServicesUtil", "Google Play services missing when getting application info.");
              v13.printStackTrace();
              return 1;
              }
              



            case 2:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.content.pm.PackageManager.NameNotFoundException) ) { _pc = 3; continue _sm; }
              Log.w("GooglePlayServicesUtil", "Google Play Store is missing.");
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              return v1;
            case 5:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.content.pm.PackageManager.NameNotFoundException) ) { _pc = 6; continue _sm; }
              Log.w("GooglePlayServicesUtil", "Google Play services is missing.");
              return 1;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
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

    public static boolean isUserRecoverableError(int p0)
    {
      boolean v1;
      switch ( p0 )
      {
        case 1:
        case 2:
        case 3:
        case 9:
        case 12:
          v1 = true;
          break;
        default:
          v1 = false;
          break;
      }
      return v1;
    }

    public static boolean showErrorDialogFragment(int p0, android.app.Activity p1, int p2)
    {
      return showErrorDialogFragment(p0, p1, p2, null);
    }

    public static boolean showErrorDialogFragment(
            int p0,
            android.app.Activity p1,
            int p2,
            android.content.DialogInterface.OnCancelListener p3)
    {
      return b(p0, p1, null, p2, p3);
    }

    public static void showErrorNotification(int p0, android.content.Context p1)
    {
      android.content.res.Resources Resources;
      android.app.Notification v3;
      String v4;
      Object[] v5;
      Resources = p1.getResources();
      v3 = new android.app.Notification(17301642, Resources.getString(com.google.android.gms.R$string.v), System.currentTimeMillis());
      v3.flags |= 0x10;
      v4 = f(p1, p0);
      v5 = new Object[1];
      v5[0] = y(p1);
      com.gameloft.android.DecompRT.setLatestEventInfo(v3, p1, v4, Resources.getString(com.google.android.gms.R$string.j, v5), getErrorPendingIntent(p0, p1, 0));
      ((android.app.NotificationManager)p1.getSystemService("notification")).notify(39789, v3);
    }

    public static void w(android.content.Context p0)
 throws com.google.android.gms.common.GooglePlayServicesNotAvailableException, com.google.android.gms.common.GooglePlayServicesRepairableException {
      int v1; // RETVAL
      int v2;
      android.content.Intent v3;
      v1 = isGooglePlayServicesAvailable(p0);
      v2 = v1;
      if ( v1 != 0 )
      {
        v3 = c(p0, v1);
        Log.e("GooglePlayServicesUtil", "GooglePlayServices not available due to error " + v2);
        if ( v3 == null )
          throw new com.google.android.gms.common.GooglePlayServicesNotAvailableException(v2);
        throw new com.google.android.gms.common.GooglePlayServicesRepairableException(v2, "Google Play Services not available", v3);
      }
    }

    private static void x(android.content.Context p0)
    {
      android.content.pm.ApplicationInfo ApplicationInfo;
      android.os.Bundle v2;
      int Int; // RETVAL
    
      ApplicationInfo = null;
      try
      {
        ApplicationInfo = p0.getPackageManager().getApplicationInfo(p0.getPackageName(), 128);
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException v4 )
      {
        Log.wtf("GooglePlayServicesUtil", "This should never happen.", v4);
      }
      v2 = ApplicationInfo.metaData;
      if ( v2 == null )
        throw new IllegalStateException("A required meta-data tag in your app's AndroidManifest.xml does not exist.  You must" +
                                        " have the following declaration within the <application> element:     <meta-data and" +
                                        "roid:name=\"com.google.android.gms.version\" android:value=\"@integer/google_play_se" +
                                        "rvices_version\" />");
      Int = v2.getInt("com.google.android.gms.version");
      if ( Int != 5077000 )
        throw new IllegalStateException("The meta-data tag in your app's AndroidManifest.xml does not have the right value.  " +
                                        "Expected 5077000 but found "
                                      + Int
                                      + ".  You must have the following declaration within the <application> element: "
                                      + "    <meta-data android:name=\"com.google.android.gms.version"
                                      + "\" android:value=\"@integer/google_play_services_version\" />");
    }

    private static String y(android.content.Context p0)
    {
      String PackageName;
      android.content.Context ApplicationContext;
      android.content.pm.PackageManager PackageManager;
      android.content.pm.ApplicationInfo ApplicationInfo;
      PackageName = (p0.getApplicationInfo()).name;
      if ( !TextUtils.isEmpty(PackageName) )
        return PackageName;
      PackageName = p0.getPackageName();
      ApplicationContext = p0.getApplicationContext();
      PackageManager = ApplicationContext.getPackageManager();
      try
      {
        ApplicationInfo = PackageManager.getApplicationInfo(p0.getPackageName(), 0);
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        ApplicationInfo = null;
      }
      if ( ApplicationInfo != null )
        return PackageManager.getApplicationLabel(ApplicationInfo).toString();
      return PackageName;
    }

}
