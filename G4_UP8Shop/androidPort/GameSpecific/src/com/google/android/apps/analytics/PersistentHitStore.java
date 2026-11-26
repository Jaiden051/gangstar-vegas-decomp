// Decompiled from classes.dex (SourceFile: PersistentHitStore.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

import android.util.Log;
import java.net.URLDecoder;
class PersistentHitStore implements com.google.android.apps.analytics.j {
    // Fields
    private static java.lang.String A;
    private static java.lang.String B;
    private static java.lang.String C;
    private static java.lang.String D;
    private static java.lang.String E;
    private static java.lang.String F;
    private static java.lang.String G;
    private static java.lang.String H;
    private static java.lang.String I;
    private static java.lang.String J;
    private static java.lang.String K;
    private static java.lang.String L;
    private static java.lang.String M;
    private static java.lang.String N;
    private static java.lang.String O;
    private static java.lang.String P;
    private static java.lang.String Q;
    private static int R;
    static java.lang.String a;
    private static final java.lang.String af;
    private static final java.lang.String ag;
    private static java.lang.String ah;
    private static java.lang.String ai;
    private static final java.lang.String aj;
    private static final java.lang.String ak;
    private static final java.lang.String al;
    private static final java.lang.String am;
    private static final java.lang.String an;
    static java.lang.String b;
    static java.lang.String c;
    static java.lang.String d;
    static java.lang.String e;
    private static int f;
    private static java.lang.String g;
    private static java.lang.String h;
    private static java.lang.String i;
    private static java.lang.String j;
    private static java.lang.String k;
    private static java.lang.String l;
    private static java.lang.String m;
    private static java.lang.String n;
    private static java.lang.String o;
    private static java.lang.String p;
    private static java.lang.String q;
    private static java.lang.String r;
    private static java.lang.String s;
    private static java.lang.String t;
    private static java.lang.String u;
    private static java.lang.String v;
    private static java.lang.String w;
    private static java.lang.String x;
    private static java.lang.String y;
    private static java.lang.String z;
    private com.google.android.apps.analytics.PersistentHitStore$DataBaseHelper S;
    private int T;
    private long U;
    private long V;
    private long W;
    private int X;
    private volatile int Y;
    private boolean Z;
    private boolean aa;
    private boolean ab;
    private int ac;
    private java.util.Random ad;
    private com.google.android.apps.analytics.CustomVariableBuffer ae;

    // Methods
    static
    {
      Object[] v0;
      StringBuilder v1;
      Object[] v2;
      StringBuilder v3;
      Object[] v4;
      StringBuilder v5;
      Object[] v6;
      StringBuilder v7;
      Object[] v8;
      StringBuilder v9;
      Object[] v10;
      StringBuilder v11;
      Object[] v12;
      StringBuilder v13;
      Object[] v14;
      StringBuilder v15;
      Object[] v16;
      StringBuilder v17;
      Object[] v18;
      StringBuilder v19;
      Object[] v20;
      StringBuilder v21;
      Object[] v22;
      StringBuilder v23;
      Object[] v24;
      StringBuilder v25;
      Object[] v26;
      Object[] v27;
      StringBuilder v28;
      Object[] v29;
      StringBuilder v30;
      Object[] v31;
      StringBuilder v32;
      Object[] v33;
      StringBuilder v34;
      Object[] v35;
      Object[] v36;
      StringBuilder v37;
      Object[] v38;
      StringBuilder v39;
      Object[] v40;
      StringBuilder v41;
      Object[] v42;
      StringBuilder v43;
      Object[] v44;
      StringBuilder v45;
      Object[] v46;
      Object[] v47;
      StringBuilder v48;
      Object[] v49;
      StringBuilder v50;
      Object[] v51;
      StringBuilder v52;
      Object[] v53;
      StringBuilder v54;
      Object[] v55;
      StringBuilder v56;
      Object[] v57;
      Object[] v58;
      StringBuilder v59;
      Object[] v60;
      StringBuilder v61;
      Object[] v62;
      StringBuilder v63;
      Object[] v64;
      StringBuilder v65;
      Object[] v66;
      StringBuilder v67;
      Object[] v68;
      StringBuilder v69;
      Object[] v70;
      Object[] v71;
      StringBuilder v72;
      Object[] v73;
      StringBuilder v74;
      Object[] v75;
      StringBuilder v76;
      Object[] v77;
      StringBuilder v78;
      Object[] v79;
      StringBuilder v80;
      Object[] v81;
      StringBuilder v82;
      Object[] v83;
      StringBuilder v84;
      Object[] v85;
      Object[] v86;
      StringBuilder v87;
      Object[] v88;
      StringBuilder v89;
      Object[] v90;
      v0 = new Object[1];
      v0[0] = "event_id";
      v1 = new StringBuilder("CREATE TABLE events (").append(String.format(
                                                               " '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,",
                                                               v0));
      v2 = new Object[1];
      v2[0] = "user_id";
      v3 = v1.append(String.format(" '%s' INTEGER NOT NULL,", v2));
      v4 = new Object[1];
      v4[0] = "account_id";
      v5 = v3.append(String.format(" '%s' CHAR(256) NOT NULL,", v4));
      v6 = new Object[1];
      v6[0] = "random_val";
      v7 = v5.append(String.format(" '%s' INTEGER NOT NULL,", v6));
      v8 = new Object[1];
      v8[0] = "timestamp_first";
      v9 = v7.append(String.format(" '%s' INTEGER NOT NULL,", v8));
      v10 = new Object[1];
      v10[0] = "timestamp_previous";
      v11 = v9.append(String.format(" '%s' INTEGER NOT NULL,", v10));
      v12 = new Object[1];
      v12[0] = "timestamp_current";
      v13 = v11.append(String.format(" '%s' INTEGER NOT NULL,", v12));
      v14 = new Object[1];
      v14[0] = "visits";
      v15 = v13.append(String.format(" '%s' INTEGER NOT NULL,", v14));
      v16 = new Object[1];
      v16[0] = "category";
      v17 = v15.append(String.format(" '%s' CHAR(256) NOT NULL,", v16));
      v18 = new Object[1];
      v18[0] = "action";
      v19 = v17.append(String.format(" '%s' CHAR(256) NOT NULL,", v18));
      v20 = new Object[1];
      v20[0] = "label";
      v21 = v19.append(String.format(" '%s' CHAR(256), ", v20));
      v22 = new Object[1];
      v22[0] = "value";
      v23 = v21.append(String.format(" '%s' INTEGER,", v22));
      v24 = new Object[1];
      v24[0] = "screen_width";
      v25 = v23.append(String.format(" '%s' INTEGER,", v24));
      v26 = new Object[1];
      v26[0] = "screen_height";
      af = v25.append(String.format(" '%s' INTEGER);", v26)).toString();
      v27 = new Object[1];
      v27[0] = "timestamp_first";
      v28 = new StringBuilder("CREATE TABLE IF NOT EXISTS session (").append(String.format(
                                                                               " '%s' INTEGER PRIMARY KEY,",
                                                                               v27));
      v29 = new Object[1];
      v29[0] = "timestamp_previous";
      v30 = v28.append(String.format(" '%s' INTEGER NOT NULL,", v29));
      v31 = new Object[1];
      v31[0] = "timestamp_current";
      v32 = v30.append(String.format(" '%s' INTEGER NOT NULL,", v31));
      v33 = new Object[1];
      v33[0] = "visits";
      v34 = v32.append(String.format(" '%s' INTEGER NOT NULL,", v33));
      v35 = new Object[1];
      v35[0] = "store_id";
      ag = v34.append(String.format(" '%s' INTEGER NOT NULL);", v35)).toString();
      v36 = new Object[1];
      v36[0] = "cv_id";
      v37 = new StringBuilder("CREATE TABLE custom_variables (").append(String.format(
                                                                          " '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,",
                                                                          v36));
      v38 = new Object[1];
      v38[0] = "event_id";
      v39 = v37.append(String.format(" '%s' INTEGER NOT NULL,", v38));
      v40 = new Object[1];
      v40[0] = "cv_index";
      v41 = v39.append(String.format(" '%s' INTEGER NOT NULL,", v40));
      v42 = new Object[1];
      v42[0] = "cv_name";
      v43 = v41.append(String.format(" '%s' CHAR(64) NOT NULL,", v42));
      v44 = new Object[1];
      v44[0] = "cv_value";
      v45 = v43.append(String.format(" '%s' CHAR(64) NOT NULL,", v44));
      v46 = new Object[1];
      v46[0] = "cv_scope";
      aj = v45.append(String.format(" '%s' INTEGER NOT NULL);", v46)).toString();
      v47 = new Object[1];
      v47[0] = "cv_id";
      v48 = new StringBuilder("CREATE TABLE IF NOT EXISTS custom_var_cache (").append(String.format(
                                                                                        " '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,",
                                                                                        v47));
      v49 = new Object[1];
      v49[0] = "event_id";
      v50 = v48.append(String.format(" '%s' INTEGER NOT NULL,", v49));
      v51 = new Object[1];
      v51[0] = "cv_index";
      v52 = v50.append(String.format(" '%s' INTEGER NOT NULL,", v51));
      v53 = new Object[1];
      v53[0] = "cv_name";
      v54 = v52.append(String.format(" '%s' CHAR(64) NOT NULL,", v53));
      v55 = new Object[1];
      v55[0] = "cv_value";
      v56 = v54.append(String.format(" '%s' CHAR(64) NOT NULL,", v55));
      v57 = new Object[1];
      v57[0] = "cv_scope";
      ak = v56.append(String.format(" '%s' INTEGER NOT NULL);", v57)).toString();
      v58 = new Object[1];
      v58[0] = "tran_id";
      v59 = new StringBuilder("CREATE TABLE transaction_events (").append(String.format(
                                                                            " '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,",
                                                                            v58));
      v60 = new Object[1];
      v60[0] = "event_id";
      v61 = v59.append(String.format(" '%s' INTEGER NOT NULL,", v60));
      v62 = new Object[1];
      v62[0] = "order_id";
      v63 = v61.append(String.format(" '%s' TEXT NOT NULL,", v62));
      v64 = new Object[1];
      v64[0] = "tran_storename";
      v65 = v63.append(String.format(" '%s' TEXT,", v64));
      v66 = new Object[1];
      v66[0] = "tran_totalcost";
      v67 = v65.append(String.format(" '%s' TEXT NOT NULL,", v66));
      v68 = new Object[1];
      v68[0] = "tran_totaltax";
      v69 = v67.append(String.format(" '%s' TEXT,", v68));
      v70 = new Object[1];
      v70[0] = "tran_shippingcost";
      al = v69.append(String.format(" '%s' TEXT);", v70)).toString();
      v71 = new Object[1];
      v71[0] = "item_id";
      v72 = new StringBuilder("CREATE TABLE item_events (").append(String.format(
                                                                     " '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,",
                                                                     v71));
      v73 = new Object[1];
      v73[0] = "event_id";
      v74 = v72.append(String.format(" '%s' INTEGER NOT NULL,", v73));
      v75 = new Object[1];
      v75[0] = "order_id";
      v76 = v74.append(String.format(" '%s' TEXT NOT NULL,", v75));
      v77 = new Object[1];
      v77[0] = "item_sku";
      v78 = v76.append(String.format(" '%s' TEXT NOT NULL,", v77));
      v79 = new Object[1];
      v79[0] = "item_name";
      v80 = v78.append(String.format(" '%s' TEXT,", v79));
      v81 = new Object[1];
      v81[0] = "item_category";
      v82 = v80.append(String.format(" '%s' TEXT,", v81));
      v83 = new Object[1];
      v83[0] = "item_price";
      v84 = v82.append(String.format(" '%s' TEXT NOT NULL,", v83));
      v85 = new Object[1];
      v85[0] = "item_count";
      am = v84.append(String.format(" '%s' TEXT NOT NULL);", v85)).toString();
      v86 = new Object[1];
      v86[0] = "hit_id";
      v87 = new StringBuilder("CREATE TABLE IF NOT EXISTS hits (").append(String.format(
                                                                            " '%s' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,",
                                                                            v86));
      v88 = new Object[1];
      v88[0] = "hit_string";
      v89 = v87.append(String.format(" '%s' TEXT NOT NULL,", v88));
      v90 = new Object[1];
      v90[0] = "hit_time";
      an = v89.append(String.format(" '%s' INTEGER NOT NULL);", v90)).toString();
    }

    PersistentHitStore(android.content.Context p0)
    {
      this(p0, "google_analytics.db", 5);
    }

    private PersistentHitStore(android.content.Context p0, String p1)
    {
      this(p0, p1, 5);
    }

    private PersistentHitStore(android.content.Context p0, String p1, int p2)
    {
      super();
      this.ac = 100;
      this.ad = new java.util.Random();
      this.S = new com.google.android.apps.analytics.PersistentHitStore$DataBaseHelper(p0, p1, 5, this);
      this.h();
      this.ae = this.o();
    }

    private PersistentHitStore(com.google.android.apps.analytics.PersistentHitStore$DataBaseHelper p0)
    {
      super();
      this.ac = 100;
      this.ad = new java.util.Random();
      this.S = p0;
      this.h();
      this.ae = this.o();
    }

    private void a(com.google.android.apps.analytics.e p0, android.database.sqlite.SQLiteDatabase p1)
    {
      com.google.android.apps.analytics.CustomVariableBuffer m;
      int i;
      com.google.android.apps.analytics.b v5;
      com.google.android.apps.analytics.b v6; // RETVAL
      com.google.android.apps.analytics.CustomVariableBuffer v7;
      int j;
      com.google.android.apps.analytics.b v9;
      android.content.ContentValues v10;
      String[] v11;
      if ( "__##GOOGLEITEM##__".equals(p0.g) || "__##GOOGLETRANSACTION##__".equals(p0.g) )
        return;
      try
      {
        m = p0.m;
        if ( this.aa )
        {
          if ( m == null )
          {
            m = new com.google.android.apps.analytics.CustomVariableBuffer();
            p0.m = m;
          }
          for ( i = 1; i <= 5; ++i )
          {
            v5 = this.ae.b(i);
            v6 = m.b(i);
            if ( v5 != null && v6 == null )
              m.a(v5);
          }
          this.aa = false;
          v7 = m;
        }
        else
        {
          v7 = m;
        }
        if ( v7 != null )
        {
          for ( j = 1; j <= 5; ++j )
          {
            if ( !v7.a(j) )
            {
              v9 = v7.b(j);
              v10 = new android.content.ContentValues();
              v10.put("event_id", Integer.valueOf(0));
              v10.put("cv_index", Integer.valueOf(v9.d()));
              v10.put("cv_name", v9.b());
              v10.put("cv_scope", Integer.valueOf(v9.a()));
              v10.put("cv_value", v9.c());
              v11 = new String[1];
              v11[0] = Integer.toString(v9.d());
              p1.update("custom_var_cache", v10, "cv_index = ?", v11);
              if ( v9.a() == 1 )
                this.ae.a(v9);
              else
                this.ae.c(v9.d());
            }
          }
        }
      }
      catch ( android.database.sqlite.SQLiteException v12 )
      {
        Log.e("GoogleAnalyticsTracker", v12.toString());
      }
    }

    private void a(
            com.google.android.apps.analytics.e p0,
            android.database.sqlite.SQLiteDatabase p1,
            boolean p2)
    {
      com.google.android.apps.analytics.q CurrentReferrer = null; // RETVAL
      com.google.android.apps.analytics.q v5 = null;
      String[] v6 = null; // RETVAL
      com.google.android.apps.analytics.CustomVariableBuffer m = null;
      int i = 0;
      com.google.android.apps.analytics.b v9 = null;
      com.google.android.apps.analytics.b v10 = null; // RETVAL
      com.google.android.apps.analytics.CustomVariableBuffer v11 = null;
      int j = 0;
      com.google.android.apps.analytics.b v13 = null;
      android.content.ContentValues v14 = null;
      String[] v15 = null;
      int v17 = 0;
      String v18 = null;
      android.content.ContentValues v19 = null;
      int v20 = 0;
      int k = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( !p0.m() )
            {
            p0.a(this.ad.nextInt(0x7FFFFFFF));
            p0.c((int)this.U);
            p0.d((int)this.V);
            p0.e((int)this.W);
            p0.f(this.X);
            }
            p0.a(this.ab);
            if ( p0.g() == -1 )
            p0.g(this.T);
            if ( "__##GOOGLEITEM##__".equals(p0.g) || "__##GOOGLETRANSACTION##__".equals(p0.g) )
            { _pc = 1; continue _sm; }
            try
            {
            m = p0.m;
            if ( this.aa )
            {
            if ( m == null )
            {
            m = new com.google.android.apps.analytics.CustomVariableBuffer();
            p0.m = m;
            }
            for ( i = 1; i <= 5; ++i )
            {
            v9 = this.ae.b(i);
            v10 = m.b(i);
            if ( v9 != null && v10 == null )
            m.a(v9);
            }
            this.aa = false;
            v11 = m;
            }
            else
            {
            v11 = m;
            }
            if ( v11 != null )
            {
            for ( j = 1; j <= 5; ++j )
            {
            if ( !v11.a(j) )
            {
            v13 = v11.b(j);
            v14 = new android.content.ContentValues();
            v14.put("event_id", Integer.valueOf(0));
            v14.put("cv_index", Integer.valueOf(v13.d()));
            v14.put("cv_name", v13.b());
            v14.put("cv_scope", Integer.valueOf(v13.a()));
            v14.put("cv_value", v13.c());
            v15 = new String[1];
            v15[0] = Integer.toString(v13.d());
            p1.update("custom_var_cache", v14, "cv_index = ?", v15);
            if ( v13.a() == 1 )
            this.ae.a(v13);
            else
            this.ae.c(v13.d());
            }
            }
            }
            }
            catch ( android.database.sqlite.SQLiteException v16 )
            {
            Log.e("GoogleAnalyticsTracker", v16.toString());
            }
            
            _pc = 1;
            continue _sm;
          case 1:
            CurrentReferrer = readCurrentReferrer(p1);
            v5 = CurrentReferrer;
            if ( CurrentReferrer == null )
            { _pc = 3; continue _sm; }
            if ( !(CurrentReferrer.b() == 0) ) { _pc = 4; continue _sm; }
            v17 = v5.d();
            v18 = v5.a();
            v19 = new android.content.ContentValues();
            v19.put("referrer", v18);
            v19.put("timestamp_referrer", java.lang.Long.valueOf(this.W));
            v19.put("referrer_visit", Integer.valueOf(this.X));
            v19.put("referrer_index", Integer.valueOf(v17));
            if ( setReferrerDatabase(p1, v19) ) { _pc = 2; continue _sm; } else { _pc = 3; continue _sm; }
          case 2:
            v5 = new com.google.android.apps.analytics.q(v18, this.W, this.X, v17);
            _pc = 4;
            continue _sm;
          case 3:
            v5 = null;
            _pc = 4;
            continue _sm;
          case 4:
            v6 = p0.f.split(",");
            if ( v6.length == 1 )
            {
            this.a(p0, v5, p1, p2);
            }
            else
            {
            v20 = v6.length;
            for ( k = 0; k < v20; ++k )
            this.a(new com.google.android.apps.analytics.e(p0, v6[k]), v5, p1, p2);
            }
            return;
        }
      }
}

    private void a(
            com.google.android.apps.analytics.e p0,
            com.google.android.apps.analytics.q p1,
            android.database.sqlite.SQLiteDatabase p2,
            boolean p3)
    {
      android.content.ContentValues v5;
      long v6;
      int Y;
      v5 = new android.content.ContentValues();
      v5.put("hit_string", HitBuilder.constructHitRequestPath(p0, p1));
      if ( p3 )
        v6 = System.currentTimeMillis();
      else
        v6 = 0;
      v5.put("hit_time", java.lang.Long.valueOf(v6));
      p2.insert("hits", null, v5);
      Y = this.Y;
      this.Y = Y + 1;
    }

    /* synthetic */ static String access$000()
    {
      return af;
    }

    /* synthetic */ static String access$100()
    {
      return ag;
    }

    /* synthetic */ static String access$200()
    {
      return aj;
    }

    /* synthetic */ static String access$300()
    {
      return ak;
    }

    /* synthetic */ static String access$400()
    {
      return al;
    }

    /* synthetic */ static String access$500()
    {
      return am;
    }

    /* synthetic */ static String access$600()
    {
      return an;
    }

    /* synthetic */ static com.google.android.apps.analytics.CustomVariableBuffer access$702(
            com.google.android.apps.analytics.PersistentHitStore p0,
            com.google.android.apps.analytics.CustomVariableBuffer p1)
    {
      p0.ae = p1;
      return p1;
    }

    /* synthetic */ static void access$800(
            com.google.android.apps.analytics.PersistentHitStore p0,
            com.google.android.apps.analytics.e p1,
            android.database.sqlite.SQLiteDatabase p2,
            boolean p3)
    {
      p0.a(p1, p2, p3);
    }

    /* synthetic */ static boolean access$900(android.database.sqlite.SQLiteDatabase p0)
    {
      return endTransaction(p0);
    }

    private com.google.android.apps.analytics.q b(android.database.sqlite.SQLiteDatabase p0)
    {
      com.google.android.apps.analytics.q v2;
      com.google.android.apps.analytics.q CurrentReferrer; // RETVAL
      com.google.android.apps.analytics.q v4;
      int v6;
      String v7;
      android.content.ContentValues v8;
      v2 = null;
      CurrentReferrer = readCurrentReferrer(p0);
      v4 = CurrentReferrer;
      if ( CurrentReferrer != null )
      {
        if ( CurrentReferrer.b() != 0 )
        {
          return v4;
        }
        else
        {
          v6 = v4.d();
          v7 = v4.a();
          v8 = new android.content.ContentValues();
          v8.put("referrer", v7);
          v8.put("timestamp_referrer", java.lang.Long.valueOf(this.W));
          v8.put("referrer_visit", Integer.valueOf(this.X));
          v8.put("referrer_index", Integer.valueOf(v6));
          if ( setReferrerDatabase(p0, v8) )
            return new com.google.android.apps.analytics.q(v7, this.W, this.X, v6);
        }
      }
      return v2;
    }

    private static boolean endTransaction(android.database.sqlite.SQLiteDatabase p0)
    {
      try
      {
        p0.endTransaction();
        return true;
      }
      catch ( android.database.sqlite.SQLiteException v3 )
      {
        Log.e("GoogleAnalyticsTracker", "exception ending transaction:" + v3.toString());
        return false;
      }
    }

    static String formatReferrer(String p0)
    {
      java.util.Map v4 = null;
      boolean v5 = false;
      boolean v6 = false;
      boolean v7 = false;
      String[][] v8 = null;
      String[] v9 = null;
      String[] v10 = null;
      String[] v11 = null;
      String[] v12 = null;
      String[] v13 = null;
      String[] v14 = null;
      String[] v15 = null;
      StringBuilder v16 = null;
      int v17 = 0;
      int v18 = 0;
      String v19 = null;
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
              if ( p0 == null )
              return null;
              if ( p0.contains("=") )
              { _pc = 1; continue _sm; }
              if ( !p0.contains("%3D") )
              return null;
              _ehCatchPc = 2;
              p0 = URLDecoder.decode(p0, "UTF-8");
              _pc = 1;
              continue _sm;
            case 1:
              v4 = Utils.parseURLParameters(p0);
              v5 = v4.get("utm_campaign") != null;
              v6 = v4.get("utm_medium") != null;
              v7 = v4.get("utm_source") != null;
              if ( v4.get("gclid") != null || v5 && v6 && v7 )
              {
              v8 = new String[7][];
              v9 = new String[2];
              v9[0] = "utmcid";
              v9[1] = (String)v4.get("utm_id");
              v8[0] = v9;
              v10 = new String[2];
              v10[0] = "utmcsr";
              v10[1] = (String)v4.get("utm_source");
              v8[1] = v10;
              v11 = new String[2];
              v11[0] = "utmgclid";
              v11[1] = (String)v4.get("gclid");
              v8[2] = v11;
              v12 = new String[2];
              v12[0] = "utmccn";
              v12[1] = (String)v4.get("utm_campaign");
              v8[3] = v12;
              v13 = new String[2];
              v13[0] = "utmcmd";
              v13[1] = (String)v4.get("utm_medium");
              v8[4] = v13;
              v14 = new String[2];
              v14[0] = "utmctr";
              v14[1] = (String)v4.get("utm_term");
              v8[5] = v14;
              v15 = new String[2];
              v15[0] = "utmcct";
              v15[1] = (String)v4.get("utm_content");
              v8[6] = v15;
              v16 = new StringBuilder();
              v17 = 0;
              v18 = 1;
              while ( v17 < v8.length )
              {
              if ( v8[v17][1] != null )
              {
              v19 = v8[v17][1].replace("+", "%20").replace(" ", "%20");
              if ( v18 != 0 )
              v18 = 0;
              else
              v16.append("|");
              v16.append(v8[v17][0]).append("=").append(v19);
              }
              ++v17;
              }
              return v16.toString();
              }
              else
              {
              Log.w("GoogleAnalyticsTracker", "Badly formatted referrer missing campaign, medium and source or click ID");
              return null;
              }
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.UnsupportedEncodingException) ) { _pc = 3; continue _sm; }
              return null;
            case 3:
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

    private static com.google.android.apps.analytics.CustomVariableBuffer getCustomVariables(
            long p0,
            android.database.sqlite.SQLiteDatabase p2)
    {
      com.google.android.apps.analytics.CustomVariableBuffer v2 = null;
      String[] v3 = null;
      android.database.Cursor v4 = null;
      Object v7 = null;
      android.database.sqlite.SQLiteException _cv_1 = null;
      Throwable _cv_2 = null;
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
              v2 = new com.google.android.apps.analytics.CustomVariableBuffer();
              _ehCatchPc = 8;
              v3 = new String[1];
              v3[0] = java.lang.Long.toString(p0);
              v4 = p2.query("custom_variables", null, "event_id= ?", v3, null, null, null);
              _pc = 1;
              continue _sm;
            case 1:
              _ehEx = null;
              _ehCatchPc = 4;
              try
              {
              if ( v4.moveToNext() )
              {
              v2.a(new com.google.android.apps.analytics.b(v4.getInt(v4.getColumnIndex("cv_index")), v4.getString(v4.getColumnIndex("cv_name")), v4.getString(v4.getColumnIndex("cv_value")), v4.getInt(v4.getColumnIndex("cv_scope"))));
              { _pc = 2; continue _sm; }
              }
              if ( v4 != null )
              v4.close();
              return v2;
              }
              catch ( android.database.sqlite.SQLiteException v5 )
              {
              { _pc = 9; continue _sm; }
              }
              


            case 2:
              _pc = 1;
              continue _sm;
            case 4:
              _ehCatchPc = 8;
              if ( !((_ehEx != null)) ) { _pc = 5; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v7 = _ehCaught;
              _pc = 11;
              continue _sm;
            case 5:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 6;
              continue _sm;
            case 6:
              _ehCatchPc = 8;
              _pc = 7;
              continue _sm;
            case 7:
              if ( v4 != null )
              v4.close();
              return v2;
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 10; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              v4 = null;
              _pc = 9;
              continue _sm;
            case 9:
              Log.e("GoogleAnalyticsTracker", _cv_1.toString());
              _pc = 7;
              continue _sm;
            case 10:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 12; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v7 = _cv_2;
              v4 = null;
              _pc = 11;
              continue _sm;
            case 11:
              if ( v4 != null )
              v4.close();
              throw com.gameloft.android.DecompRT.sneakyThrow(v7);
            case 12:
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

    private static com.google.android.apps.analytics.Item getItem(
            long p0,
            android.database.sqlite.SQLiteDatabase p2)
    {
      String[] v2 = null;
      android.database.Cursor v3 = null; // RETVAL
      android.database.Cursor v4 = null;
      com.google.android.apps.analytics.Item v5 = null;
      android.database.Cursor v9 = null;
      android.database.sqlite.SQLiteException _cv_1 = null;
      Throwable _cv_2 = null;
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
              _ehCatchPc = 1;
              v2 = new String[1];
              v2[0] = java.lang.Long.toString(p0);
              v3 = p2.query("item_events", null, "event_id= ?", v2, null, null, null);
              v4 = v3;
              try
              {
              if ( !v3.moveToFirst() )
              {
              if ( v4 != null )
              v4.close();
              return null;
              }
              v5 = new com.google.android.apps.analytics.Item$Builder(v4.getString(v4.getColumnIndex("order_id")), v4.getString(v4.getColumnIndex("item_sku")), v4.getDouble(v4.getColumnIndex("item_price")), v4.getLong(v4.getColumnIndex("item_count"))).a(v4.getString(v4.getColumnIndex("item_name"))).b(v4.getString(v4.getColumnIndex("item_category"))).a();
              if ( v4 != null )
              v4.close();
              return v5;
              }
              catch ( android.database.sqlite.SQLiteException v8 )
              {
              v9 = v3;
              { _pc = 2; continue _sm; }
              }
              catch ( Throwable v7 )
              {
              { _pc = 4; continue _sm; }
              }
              



            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 3; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              v9 = null;
              _pc = 2;
              continue _sm;
            case 2:
              try
              {
              Log.e("GoogleAnalyticsTracker", _cv_1.toString());
              }
              catch ( Throwable v7 )
              {
              v4 = v9;
              { _pc = 4; continue _sm; }
              }
              
              if ( v9 != null )
              v9.close();
              return null;
            case 3:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 5; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v4 = null;
              _pc = 4;
              continue _sm;
            case 4:
              if ( v4 != null )
              v4.close();
              throw _cv_2;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              throw new IllegalStateException("Unreachable");
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

    private static com.google.android.apps.analytics.Transaction getTransaction(
            long p0,
            android.database.sqlite.SQLiteDatabase p2)
    {
      String[] v2 = null;
      android.database.Cursor v3 = null; // RETVAL
      android.database.Cursor v4 = null;
      com.google.android.apps.analytics.Transaction v5 = null;
      android.database.sqlite.SQLiteException _cv_1 = null;
      Throwable _cv_2 = null;
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
              _ehCatchPc = 8;
              v2 = new String[1];
              v2[0] = java.lang.Long.toString(p0);
              v3 = p2.query("transaction_events", null, "event_id= ?", v2, null, null, null);
              v4 = v3;
              _ehCatchPc = 5;
              _ehCatchPc = 1;
              if ( !v3.moveToFirst() )
              {
              if ( v4 != null )
              v4.close();
              return null;
              }
              v5 = new com.google.android.apps.analytics.Transaction$Builder(v4.getString(v4.getColumnIndex("order_id")), v4.getDouble(v4.getColumnIndex("tran_totalcost"))).a(v4.getString(v4.getColumnIndex("tran_storename"))).a(v4.getDouble(v4.getColumnIndex("tran_totaltax"))).b(v4.getDouble(v4.getColumnIndex("tran_shippingcost"))).a();
              if ( v4 != null )
              v4.close();
              return v5;
            case 1:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 3; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              _pc = 2;
              continue _sm;
            case 2:
              Log.e("GoogleAnalyticsTracker", _cv_1.toString());
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              _ehCatchPc = 8;
              _pc = 7;
              continue _sm;
            case 5:
              _ehCatchPc = 8;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 6; continue _sm; }
              _pc = 10;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
              if ( v4 != null )
              v4.close();
              return null;
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 9; continue _sm; }
              v4 = null;
              _pc = 2;
              continue _sm;
            case 9:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 11; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v4 = null;
              _pc = 10;
              continue _sm;
            case 10:
              if ( v4 != null )
              v4.close();
              throw _cv_2;
            case 11:
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

    static com.google.android.apps.analytics.CustomVariableBuffer getVisitorVarBuffer(
            android.database.sqlite.SQLiteDatabase p0)
    {
      com.google.android.apps.analytics.CustomVariableBuffer v1 = null;
      String[] v2 = null;
      android.database.Cursor v3 = null;
      Object v6 = null;
      android.database.sqlite.SQLiteException _cv_1 = null;
      Throwable _cv_2 = null;
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
              v1 = new com.google.android.apps.analytics.CustomVariableBuffer();
              _ehCatchPc = 8;
              v2 = new String[1];
              v2[0] = Integer.toString(1);
              v3 = p0.query("custom_var_cache", null, "cv_scope= ?", v2, null, null, null);
              _pc = 1;
              continue _sm;
            case 1:
              _ehEx = null;
              _ehCatchPc = 4;
              try
              {
              if ( v3.moveToNext() )
              {
              v1.a(new com.google.android.apps.analytics.b(v3.getInt(v3.getColumnIndex("cv_index")), v3.getString(v3.getColumnIndex("cv_name")), v3.getString(v3.getColumnIndex("cv_value")), v3.getInt(v3.getColumnIndex("cv_scope"))));
              { _pc = 2; continue _sm; }
              }
              if ( v3 != null )
              v3.close();
              return v1;
              }
              catch ( android.database.sqlite.SQLiteException v4 )
              {
              { _pc = 9; continue _sm; }
              }
              


            case 2:
              _pc = 1;
              continue _sm;
            case 4:
              _ehCatchPc = 8;
              if ( !((_ehEx != null)) ) { _pc = 5; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v6 = _ehCaught;
              _pc = 11;
              continue _sm;
            case 5:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 6;
              continue _sm;
            case 6:
              _ehCatchPc = 8;
              _pc = 7;
              continue _sm;
            case 7:
              if ( v3 != null )
              v3.close();
              return v1;
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 10; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              v3 = null;
              _pc = 9;
              continue _sm;
            case 9:
              Log.e("GoogleAnalyticsTracker", _cv_1.toString());
              _pc = 7;
              continue _sm;
            case 10:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 12; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v6 = _cv_2;
              v3 = null;
              _pc = 11;
              continue _sm;
            case 11:
              if ( v3 != null )
              v3.close();
              throw com.gameloft.android.DecompRT.sneakyThrow(v6);
            case 12:
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

    private com.google.android.apps.analytics.PersistentHitStore$DataBaseHelper j()
    {
      return this.S;
    }

    private long k()
    {
      return this.U;
    }

    private long l()
    {
      return this.V;
    }

    private long m()
    {
      return this.W;
    }

    private int n()
    {
      return this.X;
    }

    private com.google.android.apps.analytics.CustomVariableBuffer o()
    {
      try
      {
        return getVisitorVarBuffer(this.S.getReadableDatabase());
      }
      catch ( android.database.sqlite.SQLiteException v3 )
      {
        Log.e("GoogleAnalyticsTracker", v3.toString());
        return new com.google.android.apps.analytics.CustomVariableBuffer();
      }
    }

    private int p()
    {
      int Long;
      android.database.Cursor v2;
      Long = 0;
      try
      {
        try
        {
          v2 = this.S.getReadableDatabase().rawQuery("SELECT COUNT(*) from hits", null);
          if ( v2.moveToFirst() )
            Long = (int)v2.getLong(0);
          if ( v2 != null )
            v2.close();
          return Long;
        }
        catch ( android.database.sqlite.SQLiteException v4 )
        {
          Log.e("GoogleAnalyticsTracker", v4.toString());
          return Long;
        }
      }
      finally
      {
      }
    }

    private void q()
    {
      android.database.sqlite.SQLiteDatabase WritableDatabase;
      long v2; // RETVAL
      android.content.ContentValues v3;
      WritableDatabase = this.S.getWritableDatabase();
      WritableDatabase.delete("session", null, null);
      if ( this.U != 0 )
      {
        this.V = this.W;
        this.W = System.currentTimeMillis() / 1000;
        if ( this.W == this.V )
          ++this.W;
        ++this.X;
      }
      else
      {
        v2 = System.currentTimeMillis();
        this.U = v2 / 1000;
        this.V = v2 / 1000;
        this.W = v2 / 1000;
        this.X = 1;
      }
      v3 = new android.content.ContentValues();
      v3.put("timestamp_first", java.lang.Long.valueOf(this.U));
      v3.put("timestamp_previous", java.lang.Long.valueOf(this.V));
      v3.put("timestamp_current", java.lang.Long.valueOf(this.W));
      v3.put("visits", Integer.valueOf(this.X));
      v3.put("store_id", Integer.valueOf(this.T));
      WritableDatabase.insert("session", null, v3);
      this.Z = true;
    }

    private static com.google.android.apps.analytics.q readCurrentReferrer(
            android.database.sqlite.SQLiteDatabase p0)
    {
      String[] v1 = null;
      android.database.Cursor v3 = null; // RETVAL
      android.database.Cursor v4 = null;
      com.google.android.apps.analytics.q v5 = null;
      android.database.Cursor v9 = null;
      android.database.sqlite.SQLiteException _cv_1 = null;
      Throwable _cv_2 = null;
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
              _ehCatchPc = 1;
              v1 = new String[4];
              v1[0] = "referrer";
              v1[1] = "timestamp_referrer";
              v1[2] = "referrer_visit";
              v1[3] = "referrer_index";
              v3 = p0.query("referrer", v1, null, null, null, null, null);
              v4 = v3;
              try
              {
              if ( v3.moveToFirst() )
              v5 = new com.google.android.apps.analytics.q(v4.getString(v4.getColumnIndex("referrer")), v4.getLong(v4.getColumnIndex("timestamp_referrer")), v4.getInt(v4.getColumnIndex("referrer_visit")), v4.getInt(v4.getColumnIndex("referrer_index")));
              else
              v5 = null;
              if ( v4 != null )
              v4.close();
              return v5;
              }
              catch ( android.database.sqlite.SQLiteException v8 )
              {
              v9 = v3;
              { _pc = 2; continue _sm; }
              }
              catch ( Throwable v7 )
              {
              { _pc = 4; continue _sm; }
              }
              



            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 3; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              v9 = null;
              _pc = 2;
              continue _sm;
            case 2:
              try
              {
              Log.e("GoogleAnalyticsTracker", _cv_1.toString());
              }
              catch ( Throwable v7 )
              {
              v4 = v9;
              { _pc = 4; continue _sm; }
              }
              
              if ( v9 != null )
              v9.close();
              return null;
            case 3:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 5; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v4 = null;
              _pc = 4;
              continue _sm;
            case 4:
              if ( v4 != null )
              v4.close();
              throw _cv_2;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              throw new IllegalStateException("Unreachable");
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

    private static boolean setReferrerDatabase(
            android.database.sqlite.SQLiteDatabase p0,
            android.content.ContentValues p1)
    {
      boolean v2;
      v2 = false;
      try
      {
        try
        {
          p0.beginTransaction();
          p0.delete("referrer", null, null);
          p0.insert("referrer", null, p1);
          p0.setTransactionSuccessful();
          if ( !p0.inTransaction() || endTransaction(p0) )
            return true;
          return v2;
        }
        catch ( android.database.sqlite.SQLiteException v4 )
        {
          Log.e("GoogleAnalyticsTracker", v4.toString());
          if ( p0.inTransaction() )
            endTransaction(p0);
          return v2;
        }
      }
      catch ( Throwable v5 )
      {
        if ( !p0.inTransaction() || endTransaction(p0) )
          throw v5;
      }
      return v2;
    }

    public final synchronized void a(long p0)
    {
      int Y;
      android.database.sqlite.SQLiteDatabase WritableDatabase;
      String[] v4;
      try
      {
        Y = this.Y;
        WritableDatabase = this.S.getWritableDatabase();
        v4 = new String[1];
        v4[0] = java.lang.Long.toString(p0);
        this.Y = Y - WritableDatabase.delete("hits", "hit_id = ?", v4);
      }
      catch ( android.database.sqlite.SQLiteException v5 )
      {
        Log.e("GoogleAnalyticsTracker", v5.toString());
      }
      finally
      {
      }
    }

    public final void a(android.database.sqlite.SQLiteDatabase p0)
    {
      android.database.Cursor v2 = null; // RETVAL
      android.database.Cursor v3 = null;
      com.google.android.apps.analytics.q CurrentReferrer = null; // RETVAL
      boolean v5 = false;
      android.content.ContentValues v6 = null;
      android.database.sqlite.SQLiteException _cv_1 = null;
      Throwable _cv_2 = null;
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
              _ehCatchPc = 8;
              v2 = p0.query("session", null, null, null, null, null, null);
              v3 = v2;
              _ehCatchPc = 5;
              _ehCatchPc = 1;
              if ( v2.moveToFirst() )
              {
              this.U = v3.getLong(0);
              this.V = v3.getLong(1);
              this.W = v3.getLong(2);
              this.X = v3.getInt(3);
              this.T = v3.getInt(4);
              CurrentReferrer = readCurrentReferrer(p0);
              v5 = this.U != 0 && (CurrentReferrer == null || CurrentReferrer.b() != 0);
              this.Z = v5;
              }
              else
              {
              this.Z = false;
              this.aa = true;
              this.T = new java.security.SecureRandom().nextInt() & 0x7FFFFFFF;
              v3.close();
              v6 = new android.content.ContentValues();
              v6.put("timestamp_first", java.lang.Long.valueOf(0));
              v6.put("timestamp_previous", java.lang.Long.valueOf(0));
              v6.put("timestamp_current", java.lang.Long.valueOf(0));
              v6.put("visits", Integer.valueOf(0));
              v6.put("store_id", Integer.valueOf(this.T));
              p0.insert("session", null, v6);
              v3 = null;
              }
              if ( v3 != null )
              v3.close();
              return;
            case 1:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 3; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              _pc = 2;
              continue _sm;
            case 2:
              Log.e("GoogleAnalyticsTracker", _cv_1.toString());
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              _ehCatchPc = 8;
              _pc = 7;
              continue _sm;
            case 5:
              _ehCatchPc = 8;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 6; continue _sm; }
              _pc = 10;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
              if ( v3 != null )
              v3.close();
              _ehCatchPc = -1;
              _pc = 12;
              continue _sm;
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 9; continue _sm; }
              v3 = null;
              _pc = 2;
              continue _sm;
            case 9:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 11; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v3 = null;
              _pc = 10;
              continue _sm;
            case 10:
              if ( v3 != null )
              v3.close();
              throw _cv_2;
            case 11:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 12:
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

    public final void a(com.google.android.apps.analytics.e p0)
    {
      int Y = 0;
      int v3 = 0;
      android.database.sqlite.SQLiteDatabase WritableDatabase = null; // RETVAL
      android.database.sqlite.SQLiteDatabase v5 = null;
      android.database.sqlite.SQLiteDatabase v6 = null;
      long v7 = 0L; // RETVAL
      android.content.ContentValues v8 = null;
      Throwable _cv_1 = null;
      android.database.sqlite.SQLiteException _cv_2 = null;
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
              Y = this.Y;
              if ( Y >= 1000 )
              {
              Log.w("GoogleAnalyticsTracker", "Store full. Not storing last event.");
              return;
              }
              if ( this.ac != 100 )
              {
              v3 = p0.g() == -1 ? this.T : p0.g();
              if ( v3 % 10000 >= 100 * this.ac )
              {
              if ( GoogleAnalyticsTracker.getInstance().e() )
              Log.v("GoogleAnalyticsTracker", "User has been sampled out. Aborting hit.");
              return;
              }
              }
              com.gameloft.android.DecompRT.monitorEnter(this);
              _ehCatchPc = 5;
              WritableDatabase = this.S.getWritableDatabase();
              v5 = WritableDatabase;
              _ehCatchPc = 2;
              try
              {
              WritableDatabase.beginTransaction();
              if ( !this.Z )
              {
              v6 = this.S.getWritableDatabase();
              v6.delete("session", null, null);
              if ( this.U != 0 )
              {
              this.V = this.W;
              this.W = System.currentTimeMillis() / 1000;
              if ( this.W == this.V )
              ++this.W;
              ++this.X;
              }
              else
              {
              v7 = System.currentTimeMillis();
              this.U = v7 / 1000;
              this.V = v7 / 1000;
              this.W = v7 / 1000;
              this.X = 1;
              }
              v8 = new android.content.ContentValues();
              v8.put("timestamp_first", java.lang.Long.valueOf(this.U));
              v8.put("timestamp_previous", java.lang.Long.valueOf(this.V));
              v8.put("timestamp_current", java.lang.Long.valueOf(this.W));
              v8.put("visits", Integer.valueOf(this.X));
              v8.put("store_id", Integer.valueOf(this.T));
              v6.insert("session", null, v8);
              this.Z = true;
              }
              this.a(p0, v5, true);
              v5.setTransactionSuccessful();
              if ( v5.inTransaction() )
              endTransaction(v5);
              }
              catch ( android.database.sqlite.SQLiteException v11 )
              {
              Log.e("GoogleAnalyticsTracker", "putEventOuter:" + v11.toString());
              { _pc = 4; continue _sm; }
              }
              
              _pc = 1;
              continue _sm;
            case 1:
              return;
            case 2:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              if ( WritableDatabase.inTransaction() )
              endTransaction(v5);
              throw _cv_1;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              if ( v5.inTransaction() )
              endTransaction(v5);
              _pc = 1;
              continue _sm;
            case 5:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 6; continue _sm; }
              _cv_2 = (android.database.sqlite.SQLiteException)_ehCaught;
              Log.e("GoogleAnalyticsTracker", "Can't get db: " + _cv_2.toString());
              _pc = 7;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
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

    public final void a(boolean p0)
    {
      this.ab = p0;
    }

    public final boolean a(String p0)
    {
      String v2;
      android.database.sqlite.SQLiteDatabase WritableDatabase;
      com.google.android.apps.analytics.q CurrentReferrer;
      android.content.ContentValues v7;
      long v8;
      v2 = formatReferrer(p0);
      if ( v2 == null )
        return false;
      try
      {
        WritableDatabase = this.S.getWritableDatabase();
        CurrentReferrer = readCurrentReferrer(WritableDatabase);
        v7 = new android.content.ContentValues();
        v7.put("referrer", v2);
        v7.put("timestamp_referrer", java.lang.Long.valueOf(0));
        v7.put("referrer_visit", Integer.valueOf(0));
        if ( CurrentReferrer != null )
        {
          v8 = CurrentReferrer.d();
          if ( CurrentReferrer.b() > 0 )
            ++v8;
        }
        else
        {
          v8 = 1;
        }
        v7.put("referrer_index", java.lang.Long.valueOf(v8));
        if ( setReferrerDatabase(WritableDatabase, v7) )
        {
          this.i();
          return true;
        }
        else
        {
          return false;
        }
      }
      catch ( android.database.sqlite.SQLiteException v9 )
      {
        Log.e("GoogleAnalyticsTracker", v9.toString());
        return false;
      }
    }

    public final com.google.android.apps.analytics.e[] a(int p0, android.database.sqlite.SQLiteDatabase p1, int p2)
    {
      java.util.List v4 = null;
      android.database.Cursor v5 = null;
      com.google.android.apps.analytics.e v6 = null;
      long Long = 0L;
      com.google.android.apps.analytics.Transaction Transaction = null;
      android.database.sqlite.SQLiteException v9 = null;
      android.database.Cursor v10 = null;
      com.google.android.apps.analytics.e[] v11 = null;
      com.google.android.apps.analytics.Item Item = null;
      com.google.android.apps.analytics.CustomVariableBuffer CustomVariables = null;
      Object v15 = null;
      android.database.sqlite.SQLiteException _cv_1 = null;
      Throwable _cv_2 = null;
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
              v4 = new java.util.ArrayList();
              _ehCatchPc = 7;
              v5 = p1.query("events", null, null, null, null, null, "event_id", Integer.toString(1000));
              _pc = 1;
              continue _sm;
            case 1:
              _ehEx = null;
              _ehCatchPc = 3;
              if ( !v5.moveToNext() )
              {
              if ( v5 != null )
              v5.close();
              return (com.google.android.apps.analytics.e[])v4.toArray(new com.google.android.apps.analytics.e[v4.size()]);
              }
              v6 = new com.google.android.apps.analytics.e(v5.getLong(0), v5.getString(2), v5.getInt(3), v5.getInt(4), v5.getInt(5), v5.getInt(6), v5.getInt(7), v5.getString(8), v5.getString(9), v5.getString(10), v5.getInt(11), v5.getInt(12), v5.getInt(13));
              v6.g(v5.getInt(1));
              Long = v5.getLong(v5.getColumnIndex("event_id"));
              if ( "__##GOOGLETRANSACTION##__".equals(v6.g) )
              {
              Transaction = getTransaction(Long, p1);
              if ( Transaction == null )
              Log.w("GoogleAnalyticsTracker", "missing expected transaction for event " + Long);
              v6.a(Transaction);
              }
              else if ( "__##GOOGLEITEM##__".equals(v6.g) )
              {
              Item = getItem(Long, p1);
              if ( Item == null )
              Log.w("GoogleAnalyticsTracker", "missing expected item for event " + Long);
              v6.a(Item);
              }
              else
              {
              if ( p2 <= 1 )
              CustomVariables = new com.google.android.apps.analytics.CustomVariableBuffer();
              else
              CustomVariables = getCustomVariables(Long, p1);
              v6.m = CustomVariables;
              }
              v4.add(v6);
              _pc = 1;
              continue _sm;
            case 3:
              _ehCatchPc = 7;
              if ( !((_ehEx != null && (_ehEx instanceof android.database.sqlite.SQLiteException))) ) { _pc = 4; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v9 = (android.database.sqlite.SQLiteException)_ehCaught;
              v10 = v5;
              _pc = 8;
              continue _sm;
            case 4:
              if ( !((_ehEx != null)) ) { _pc = 5; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v15 = _ehCaught;
              _pc = 10;
              continue _sm;
            case 5:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 6;
              continue _sm;
            case 6:
              _ehCatchPc = 7;
              return (com.google.android.apps.analytics.e[])v11;
            case 7:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 9; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              v9 = _cv_1;
              v10 = null;
              _pc = 8;
              continue _sm;
            case 8:
              try
              {
              Log.e("GoogleAnalyticsTracker", v9.toString());
              v11 = new com.google.android.apps.analytics.e[0];
              }
              catch ( Throwable v18 )
              {
              v15 = v18;
              v5 = v10;
              { _pc = 10; continue _sm; }
              }
              
              if ( v10 != null )
              v10.close();
              return (com.google.android.apps.analytics.e[])v11;
            case 9:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 11; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v15 = _cv_2;
              v5 = null;
              _pc = 10;
              continue _sm;
            case 10:
              if ( v5 != null )
              v5.close();
              throw com.gameloft.android.DecompRT.sneakyThrow(v15);
            case 11:
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

    public final com.google.android.apps.analytics.i[] a()
    {
      return this.a(1000);
    }

    public final com.google.android.apps.analytics.i[] a(int p0)
    {
      java.util.List v2 = null;
      android.database.sqlite.SQLiteDatabase ReadableDatabase = null;
      android.database.Cursor v4 = null;
      com.google.android.apps.analytics.i v5 = null;
      com.google.android.apps.analytics.i[] v7 = null;
      Object v9 = null;
      android.database.sqlite.SQLiteException _cv_1 = null;
      Throwable _cv_2 = null;
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
              v2 = new java.util.ArrayList();
              _ehCatchPc = 8;
              ReadableDatabase = this.S.getReadableDatabase();
              v4 = ReadableDatabase.query("hits", null, null, null, null, null, "hit_id", Integer.toString(1000));
              _pc = 1;
              continue _sm;
            case 1:
              _ehEx = null;
              _ehCatchPc = 4;
              try
              {
              if ( v4.moveToNext() )
              {
              v5 = new com.google.android.apps.analytics.i(v4.getString(1), v4.getLong(0));
              v2.add(v5);
              { _pc = 2; continue _sm; }
              }
              if ( v4 != null )
              v4.close();
              return (com.google.android.apps.analytics.i[])v2.toArray(new com.google.android.apps.analytics.i[v2.size()]);
              }
              catch ( android.database.sqlite.SQLiteException v6 )
              {
              { _pc = 9; continue _sm; }
              }
              


            case 2:
              _pc = 1;
              continue _sm;
            case 4:
              _ehCatchPc = 8;
              if ( !((_ehEx != null)) ) { _pc = 5; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v9 = _ehCaught;
              _pc = 11;
              continue _sm;
            case 5:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 6;
              continue _sm;
            case 6:
              _ehCatchPc = 8;
              _pc = 7;
              continue _sm;
            case 7:
              if ( v4 != null )
              v4.close();
              return (com.google.android.apps.analytics.i[])v7;
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.database.sqlite.SQLiteException) ) { _pc = 10; continue _sm; }
              _cv_1 = (android.database.sqlite.SQLiteException)_ehCaught;
              v4 = null;
              _pc = 9;
              continue _sm;
            case 9:
              Log.e("GoogleAnalyticsTracker", _cv_1.toString());
              v7 = new com.google.android.apps.analytics.i[0];
              _pc = 7;
              continue _sm;
            case 10:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 12; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v9 = _cv_2;
              v4 = null;
              _pc = 11;
              continue _sm;
            case 11:
              if ( v4 != null )
              v4.close();
              throw com.gameloft.android.DecompRT.sneakyThrow(v9);
            case 12:
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

    public final int b()
    {
      return this.Y;
    }

    public final String b(int p0)
    {
      com.google.android.apps.analytics.b v2; // RETVAL
      com.google.android.apps.analytics.b v3;
      v2 = this.ae.b(p0);
      v3 = v2;
      if ( v2 != null && v2.a() == 1 )
        return v3.c();
      else
        return null;
    }

    public final int c()
    {
      return this.T;
    }

    public final void c(int p0)
    {
      this.ac = p0;
    }

    public final String d()
    {
      Object[] v3;
      if ( !this.Z )
        return null;
      v3 = new Object[2];
      v3[0] = Integer.valueOf(this.T);
      v3[1] = java.lang.Long.valueOf(this.U);
      return String.format("%d.%d", v3);
    }

    public final String e()
    {
      if ( this.Z )
        return Integer.toString((int)this.W);
      else
        return null;
    }

    public final com.google.android.apps.analytics.q f()
    {
      try
      {
        return readCurrentReferrer(this.S.getReadableDatabase());
      }
      catch ( android.database.sqlite.SQLiteException v3 )
      {
        Log.e("GoogleAnalyticsTracker", v3.toString());
        return null;
      }
    }

    public final void g()
    {
      try
      {
        this.S.getWritableDatabase().delete("referrer", null, null);
      }
      catch ( android.database.sqlite.SQLiteException v1 )
      {
        Log.e("GoogleAnalyticsTracker", v1.toString());
      }
    }

    public final void h()
    {
      try
      {
        this.a(this.S.getWritableDatabase());
      }
      catch ( android.database.sqlite.SQLiteException v1 )
      {
        Log.e("GoogleAnalyticsTracker", v1.toString());
      }
    }

    public final synchronized void i()
    {
      this.Z = false;
      this.aa = true;
      this.Y = this.p();
    }

}
