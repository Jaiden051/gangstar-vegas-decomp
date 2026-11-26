// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class i implements android.widget.AdapterView.OnItemClickListener {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.FacebookFriendsActivity a;

    // Methods
    i(com.gameloft.android.GAND.GloftGGSS.FacebookFriendsActivity p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onItemClick(android.widget.AdapterView<?> p0, android.view.View p1, int p2, long p3)
    {
      android.widget.CheckBox v5;
      if ( p1 != null )
      {
        v5 = (android.widget.CheckBox)p1.findViewById(2131427473);
        v5.setChecked(!v5.isChecked());
      }
    }

}
