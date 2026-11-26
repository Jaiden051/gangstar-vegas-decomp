// Decompiled from classes.dex (SourceFile: VASTPlayer$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast;

class VASTPlayer$2 implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final com.gameloft.glads.vast.VASTPlayer b;

    // Methods
    VASTPlayer$2(com.gameloft.glads.vast.VASTPlayer p0, String p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      com.gameloft.glads.vast.processor.VASTProcessor v1;
      int v2; // RETVAL
    
      v1 = new com.gameloft.glads.vast.processor.VASTProcessor((com.gameloft.glads.vast.processor.VASTMediaPicker)new com.gameloft.glads.vast.util.DefaultMediaPicker(VASTPlayer.access$100(this.b)));
      v2 = v1.process(this.a);
      if ( v2 != 0 )
      {
        VASTPlayer.access$000(this.b, v2);
      }
      else
      {
        VASTPlayer.access$202(this.b, v1.getModel());
        VASTPlayer.access$300(this.b);
      }
    }

}
