// Decompiled from classes.dex (SourceFile: j.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

final class j extends com.gameloft.android.GAND.GloftGGSS.iab.IABAsyncTask {
    // Fields
    com.gameloft.android.GAND.GloftGGSS.iab.d a;
    final com.gameloft.android.GAND.GloftGGSS.iab.IABRequestHandler b;

    // Methods
    public j(com.gameloft.android.GAND.GloftGGSS.iab.IABRequestHandler p0, com.gameloft.android.GAND.GloftGGSS.iab.d p1)
    {
      super();
      this.b = p0;
      this.a = null;
      this.a = p1;
    
    }

    protected final Integer a(android.os.Bundle p0)
    {
      android.os.Bundle v2; // RETVAL
    
      v2 = IABRequestHandler.access$000(this.b, p0);
      if ( this.a != null )
        this.a.a(v2);
      return new Integer(0);
    }

}
