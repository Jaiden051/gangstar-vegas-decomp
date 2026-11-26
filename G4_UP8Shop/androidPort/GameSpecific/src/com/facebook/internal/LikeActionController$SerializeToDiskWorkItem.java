// Decompiled from classes.dex (SourceFile: LikeActionController$SerializeToDiskWorkItem.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class LikeActionController$SerializeToDiskWorkItem implements java.lang.Runnable {
    // Fields
    private java.lang.String cacheKey;
    private java.lang.String controllerJson;

    // Methods
    LikeActionController$SerializeToDiskWorkItem(String p0, String p1)
    {
      super();
      this.cacheKey = p0;
      this.controllerJson = p1;
    }

    public void run()
    {
      LikeActionController.access$2900(this.cacheKey, this.controllerJson);
    }

}
