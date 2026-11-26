// Decompiled from classes.dex (SourceFile: SamsungIAB2Activity$PurchaseItemTask.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.TextUtils;
class SamsungIAB2Activity$PurchaseItemTask extends android.os.AsyncTask {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity a;
    private com.gameloft.android.GAND.GloftGGSS.iab.a b;

    // Methods
    private SamsungIAB2Activity$PurchaseItemTask(com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity p0)
    {
      super();
      this.a = p0;
      this.b = new com.gameloft.android.GAND.GloftGGSS.iab.a();
    
    }

    /* synthetic */ SamsungIAB2Activity$PurchaseItemTask(com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity p0, int p1)
    {
      this(p0);
    }

    private Boolean a()
    {
      try
      {
        this.b = SamsungIAB2Activity.access$400(this.a).a();
        return Boolean.valueOf(true);
      }
      catch ( Exception e )
      {
        return Boolean.valueOf(false);
      }
    }

    private void a(Boolean p0)
    {
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( !p0.booleanValue() )
            { _pc = 1; continue _sm; }
            if ( this.b.a() == 0 )
            {
            SamsungIAB2Activity.access$400(this.a).a(this.a, 1, SamsungIAB2Activity.access$300(this.a), SamsungIAB2Activity.access$800(this.a));
            return;
            }
            if ( !(this.b.a() == -1001) ) { _pc = 1; continue _sm; }
            {
            SamsungIAB2Activity.dismissProgressDialog(SamsungIAB2Activity.access$500(this.a));
            SamsungIAB2Activity.access$400(this.a).a(this.a, this.a.getString(2131165487), this.a.getString(2131165488), true, (Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.ab(this), true);
            }
            _pc = 2;
            continue _sm;
          case 1:
            TextUtils.isEmpty(this.b.b());
            this.a.a(1, true);
            _pc = 2;
            continue _sm;
          case 2:
            return;
        }
      }
}

    /* synthetic */ static com.gameloft.android.GAND.GloftGGSS.iab.a access$900(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity$PurchaseItemTask p0)
    {
      return p0.b;
    }

    /* synthetic */ protected Object doInBackground(Object[] p0)
    {
      return this.a();
    }

    /* synthetic */ protected void onPostExecute(Object p0)
    {
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( !((Boolean)p0).booleanValue() )
            { _pc = 1; continue _sm; }
            if ( this.b.a() == 0 )
            {
            SamsungIAB2Activity.access$400(this.a).a(this.a, 1, SamsungIAB2Activity.access$300(this.a), SamsungIAB2Activity.access$800(this.a));
            return;
            }
            if ( !(this.b.a() == -1001) ) { _pc = 1; continue _sm; }
            {
            SamsungIAB2Activity.dismissProgressDialog(SamsungIAB2Activity.access$500(this.a));
            SamsungIAB2Activity.access$400(this.a).a(this.a, this.a.getString(2131165487), this.a.getString(2131165488), true, (Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.ab(this), true);
            }
            _pc = 2;
            continue _sm;
          case 1:
            TextUtils.isEmpty(this.b.b());
            this.a.a(1, true);
            _pc = 2;
            continue _sm;
          case 2:
            return;
        }
      }
}

    protected void onPreExecute()
    {
      super.onPreExecute();
    }

}
