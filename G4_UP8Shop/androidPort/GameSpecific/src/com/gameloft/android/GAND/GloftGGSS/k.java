// Decompiled from classes.dex (SourceFile: k.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class k implements android.widget.CompoundButton.OnCheckedChangeListener {
    // Fields
    final int a;
    final com.gameloft.android.GAND.GloftGGSS.j b;

    // Methods
    k(com.gameloft.android.GAND.GloftGGSS.j p0, int p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void onCheckedChanged(android.widget.CompoundButton p0, boolean p1)
    {
      if ( p1 )
      {
        FacebookFriendsActivity.access$100(this.b.a).add(new Integer(this.a));
      }
      else if ( FacebookFriendsActivity.access$100(this.b.a).contains(new Integer(this.a)) )
      {
        FacebookFriendsActivity.access$100(this.b.a).remove(new Integer(this.a));
      }
    }

}
