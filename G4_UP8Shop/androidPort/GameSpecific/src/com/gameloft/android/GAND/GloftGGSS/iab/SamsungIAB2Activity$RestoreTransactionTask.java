// Decompiled from classes.dex (SourceFile: SamsungIAB2Activity$RestoreTransactionTask.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.TextUtils;
class SamsungIAB2Activity$RestoreTransactionTask extends android.os.AsyncTask {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity a;
    private android.content.Context b;
    private java.util.ArrayList c;
    private com.gameloft.android.GAND.GloftGGSS.iab.a d;
    private int e;
    private int f;

    // Methods
    public SamsungIAB2Activity$RestoreTransactionTask(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity p0,
            android.content.Context p1)
    {
      super();
      this.a = p0;
      this.b = null;
      this.c = null;
      this.d = new com.gameloft.android.GAND.GloftGGSS.iab.a();
      this.e = 1;
      this.f = 100;
      this.b = p1;
    
    }

    private Boolean a()
    {
      android.os.Bundle v1;
      int Int;
      java.util.ArrayList StringArrayList;
      java.util.ArrayList v4;
      java.util.Iterator v5;
      com.gameloft.android.GAND.GloftGGSS.iab.o v6;
      int i;
      com.gameloft.android.GAND.GloftGGSS.iab.ap v8;
      try
      {
        this.d = SamsungIAB2Activity.access$400(this.a).a();
        if ( this.d.a() != 0 )
        {
          TextUtils.isEmpty(this.d.b());
          return Boolean.valueOf(false);
        }
        else
        {
          while ( this.e > 0 )
          {
            v1 = SamsungIAB2Activity.access$400(this.a).a(SamsungIAB2Activity.access$300(this.a), this.e, this.e + this.f);
            this.d.a(v1.getInt("STATUS_CODE"));
            this.d.a(v1.getString("ERROR_STRING"));
            this.d.b(v1.getString("IAP_UPGRADE_URL"));
            SamsungIAB2Activity.access$400(this.a);
            Int = v1.getInt("STATUS_CODE");
            SamsungIAB2Activity.access$400(this.a);
            if ( Int != 0 )
            {
              this.e = -1;
              TextUtils.isEmpty(v1.getString("ERROR_STRING"));
              return Boolean.valueOf(false);
            }
            SamsungIAB2Activity.access$400(this.a);
            StringArrayList = v1.getStringArrayList("RESULT_LIST");
            v4 = InAppBilling.a.H().a();
            if ( StringArrayList == null || StringArrayList.isEmpty() )
            {
              this.e = -1;
            }
            else
            {
              v5 = StringArrayList.iterator();
              while ( v5.hasNext() )
              {
                v6 = new com.gameloft.android.GAND.GloftGGSS.iab.o((String)v5.next());
                ++this.e;
                if ( v6.c().equalsIgnoreCase("01") || v6.c().equalsIgnoreCase("02") )
                {
                  for ( i = 0; i < v4.size(); ++i )
                  {
                    v8 = (com.gameloft.android.GAND.GloftGGSS.iab.ap)v4.get(i);
                    if ( v6.b().equalsIgnoreCase(v8.a().a("samsung_item_id")) )
                    {
                      this.c.add(v6);
                      this.a.a(0, v8.b(), false, v6.a());
                    }
                  }
                }
              }
            }
          }
          return Boolean.valueOf(true);
        }
      }
      catch ( Exception e )
      {
        return Boolean.valueOf(false);
      }
    }

    private void a(Boolean p0)
    {
      if ( !p0.booleanValue() )
      {
        SamsungIAB2Activity.dismissProgressDialog(SamsungIAB2Activity.access$500(this.a));
        if ( this.d.a() == -1001 )
        {
          SamsungIAB2Activity.access$400(this.a).a(this.a, this.a.getString(2131165487), this.a.getString(2131165488), true, (Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.ac(this), true);
        }
        else
        {
          TextUtils.isEmpty(this.d.b());
          this.a.a(1, null, true);
        }
        return;
      }
      try
      {
        if ( this.c != null && this.c.size() > 0 )
        {
          SamsungIAB2Activity.dismissProgressDialog(SamsungIAB2Activity.access$500(this.a));
          this.a.finish();
        }
        else
        {
          this.a.a(1, null, true);
        }
      }
      catch ( Exception e )
      {
        this.a.a(1, null, true);
      }
    }

    /* synthetic */ static com.gameloft.android.GAND.GloftGGSS.iab.a access$1000(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$RestoreTransactionTask p0)
    {
      return p0.d;
    }

    /* synthetic */ protected Object doInBackground(Object[] p0)
    {
      return this.a();
    }

    /* synthetic */ protected void onPostExecute(Object p0)
    {
      if ( !((Boolean)p0).booleanValue() )
      {
        SamsungIAB2Activity.dismissProgressDialog(SamsungIAB2Activity.access$500(this.a));
        if ( this.d.a() == -1001 )
        {
          SamsungIAB2Activity.access$400(this.a).a(this.a, this.a.getString(2131165487), this.a.getString(2131165488), true, (Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.ac(this), true);
        }
        else
        {
          TextUtils.isEmpty(this.d.b());
          this.a.a(1, null, true);
        }
        return;
      }
      try
      {
        if ( this.c != null && this.c.size() > 0 )
        {
          SamsungIAB2Activity.dismissProgressDialog(SamsungIAB2Activity.access$500(this.a));
          this.a.finish();
        }
        else
        {
          this.a.a(1, null, true);
        }
      }
      catch ( Exception e )
      {
        this.a.a(1, null, true);
      }
    }

    protected void onPreExecute()
    {
      super.onPreExecute();
      this.c = new java.util.ArrayList();
    }

}
