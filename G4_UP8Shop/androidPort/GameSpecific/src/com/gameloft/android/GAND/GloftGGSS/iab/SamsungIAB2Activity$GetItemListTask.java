// Decompiled from classes.dex (SourceFile: SamsungIAB2Activity$GetItemListTask.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.TextUtils;
class SamsungIAB2Activity$GetItemListTask extends android.os.AsyncTask {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity a;
    private android.content.Context b;
    private java.util.ArrayList c;
    private com.gameloft.android.GAND.GloftGGSS.iab.a d;

    // Methods
    public SamsungIAB2Activity$GetItemListTask(com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity p0, android.content.Context p1)
    {
      super();
      this.a = p0;
      this.b = null;
      this.c = null;
      this.d = new com.gameloft.android.GAND.GloftGGSS.iab.a();
      this.b = p1;
    
    }

    private Boolean a()
    {
      android.os.Bundle v1;
      java.util.ArrayList StringArrayList; // RETVAL
      java.util.Iterator i;
      try
      {
        v1 = SamsungIAB2Activity.access$400(this.a).a(SamsungIAB2Activity.access$300(this.a), "10");
        this.d.a(v1.getInt("STATUS_CODE"));
        this.d.a(v1.getString("ERROR_STRING"));
        this.d.b(v1.getString("IAP_UPGRADE_URL"));
        if ( this.d.a() != 0 )
        {
          TextUtils.isEmpty(v1.getString("ERROR_STRING"));
          return Boolean.valueOf(false);
        }
        else
        {
          StringArrayList = v1.getStringArrayList("RESULT_LIST");
          if ( StringArrayList != null )
          {
            for ( i = StringArrayList.iterator();
                  i.hasNext();
                  this.c.add(new com.gameloft.android.GAND.GloftGGSS.iab.p((String)i.next())) )
            {
              ;
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
          SamsungIAB2Activity.access$400(this.a).a(this.a, this.a.getString(2131165487), this.a.getString(2131165488), true, (Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.aa(this), true);
        }
        else
        {
          TextUtils.isEmpty(this.d.b());
          this.a.a(1, true);
        }
        return;
      }
      try
      {
        if ( this.c != null && this.c.size() > 0 )
        {
          this.a.a();
        }
        else
        {
          TextUtils.isEmpty(this.d.b());
          this.a.a(1, true);
        }
      }
      catch ( Exception e )
      {
        this.a.a(1, true);
      }
    }

    /* synthetic */ static com.gameloft.android.GAND.GloftGGSS.iab.a access$600(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$GetItemListTask p0)
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
          SamsungIAB2Activity.access$400(this.a).a(this.a, this.a.getString(2131165487), this.a.getString(2131165488), true, (Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.aa(this), true);
        }
        else
        {
          TextUtils.isEmpty(this.d.b());
          this.a.a(1, true);
        }
        return;
      }
      try
      {
        if ( this.c != null && this.c.size() > 0 )
        {
          this.a.a();
        }
        else
        {
          TextUtils.isEmpty(this.d.b());
          this.a.a(1, true);
        }
      }
      catch ( Exception e )
      {
        this.a.a(1, true);
      }
    }

    protected void onPreExecute()
    {
      super.onPreExecute();
      this.c = new java.util.ArrayList();
    }

}
