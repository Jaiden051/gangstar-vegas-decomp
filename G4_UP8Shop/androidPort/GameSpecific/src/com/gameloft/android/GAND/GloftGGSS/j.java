// Decompiled from classes.dex (SourceFile: j.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class j extends android.widget.ArrayAdapter {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.FacebookFriendsActivity a;
    private android.content.Context b;
    private int c;
    private int d;
    private java.lang.String[] e;

    // Methods
    public j(
            com.gameloft.android.GAND.GloftGGSS.FacebookFriendsActivity p0,
            android.content.Context p1,
            int p2,
            int p3,
            String[] p4)
    {
      super(p1, 2130903075, 2131427472, p4);
      this.a = p0;
      this.e = null;
      this.b = p1;
      this.d = 2130903075;
      this.c = 2131427472;
      this.e = p4;
    
    }

    public final android.view.View getView(int p0, android.view.View p1, android.view.ViewGroup p2)
    {
      com.gameloft.android.GAND.GloftGGSS.l v4;
      android.view.View v5;
      v4 = new com.gameloft.android.GAND.GloftGGSS.l(this, 0);
      v5 = ((android.view.LayoutInflater)this.a.getSystemService("layout_inflater")).inflate(this.d, null);
      v4.a = (android.widget.TextView)v5.findViewById(this.c);
      v4.a.setText(this.e[p0]);
      v4.b = (android.widget.CheckBox)v5.findViewById(2131427473);
      v4.b.setChecked(FacebookFriendsActivity.access$100(this.a).contains(new Integer(p0)));
      v4.b.setOnCheckedChangeListener((android.widget.CompoundButton.OnCheckedChangeListener)new com.gameloft.android.GAND.GloftGGSS.k(this, p0));
      v5.setTag(v4);
      return v5;
    }

}
