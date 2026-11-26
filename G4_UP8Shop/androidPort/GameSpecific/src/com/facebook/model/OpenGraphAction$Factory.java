// Decompiled from classes.dex (SourceFile: OpenGraphAction$Factory.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

public final class OpenGraphAction$Factory {
    // Methods
    public OpenGraphAction$Factory()
    {
      super();
    }

    public static com.facebook.model.OpenGraphAction createForPost()
    {
      return createForPost(com.facebook.model.OpenGraphAction.class, null);
    }

    public static <T extends com.facebook.model.OpenGraphAction> T createForPost(
            Class<T> p0,
            String p1)
    {
      com.facebook.model.OpenGraphAction v2;
      v2 = (com.facebook.model.OpenGraphAction)GraphObject$Factory.create(p0);
      if ( p1 != null )
        v2.setType(p1);
      return (T)v2;
    }

    public static com.facebook.model.OpenGraphAction createForPost(String p0)
    {
      return createForPost(com.facebook.model.OpenGraphAction.class, p0);
    }

}
