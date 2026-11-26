// Decompiled from classes.dex (SourceFile: FacebookFriendsActivity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

public class FacebookFriendsActivity extends android.app.Activity {
    // Fields
    private static java.util.ArrayList a;
    private java.util.ArrayList b;
    private android.widget.Button c;
    private android.widget.Button d;
    private android.widget.TextView e;
    private android.widget.ListView f;
    private java.lang.String[] g;
    private com.gameloft.android.GAND.GloftGGSS.j h;
    private int i;

    // Methods
    public FacebookFriendsActivity()
    {
      super();
    }

    /* synthetic */ static java.util.ArrayList access$100(
            com.gameloft.android.GAND.GloftGGSS.FacebookFriendsActivity p0)
    {
      return p0.b;
    }

    /* synthetic */ static int access$200(
            com.gameloft.android.GAND.GloftGGSS.FacebookFriendsActivity p0)
    {
      return p0.i;
    }

    public final String a()
    {
      String v1;
      int i;
      v1 = "";
      if ( a != null && !a.isEmpty() )
      {
        for ( i = 0; i < this.b.size(); ++i )
        {
          v1 = v1 + (String)((java.util.ArrayList)a.get(((Integer)this.b.get(i)).intValue())).get(0);
          if ( this.b.size() > 1 && i != this.b.size() - 1 )
            v1 = v1 + ",";
        }
      }
      return v1;
    }

    public final void b()
    {
      this.finish();
    }

    public void onCreate(android.os.Bundle p0)
    {
      java.util.ArrayList v2;
      int i;
      super.onCreate(p0);
      this.requestWindowFeature(7);
      this.setContentView(2130903062);
      this.getWindow().setFeatureInt(7, 2130903061);
      this.e = (android.widget.TextView)this.findViewById(2131427414);
      this.d = (android.widget.Button)this.findViewById(2131427413);
      this.d.setOnClickListener((android.view.View.OnClickListener)new com.gameloft.android.GAND.GloftGGSS.g(this));
      this.c = (android.widget.Button)this.findViewById(2131427415);
      this.c.setOnClickListener((android.view.View.OnClickListener)new com.gameloft.android.GAND.GloftGGSS.h(this));
      this.getWindow().setFlags(1024, 1024);
      v2 = Game.aq;
      a = v2;
      if ( v2 != null && !a.isEmpty() )
      {
        this.b = new java.util.ArrayList();
        this.g = new String[a.size()];
        for ( i = 0; i < a.size(); ++i )
        {
          if ( ((java.util.ArrayList)a.get(i)).size() > 0 )
            this.g[i] = (String)((java.util.ArrayList)a.get(i)).get(1);
        }
        this.f = (android.widget.ListView)this.findViewById(2131427416);
        this.h = new com.gameloft.android.GAND.GloftGGSS.j(this, this, 2130903075, 2131427472, this.g);
        this.f.setAdapter(this.h);
        this.f.setOnItemClickListener((android.widget.AdapterView.OnItemClickListener)new com.gameloft.android.GAND.GloftGGSS.i(this));
      }
    }

}
