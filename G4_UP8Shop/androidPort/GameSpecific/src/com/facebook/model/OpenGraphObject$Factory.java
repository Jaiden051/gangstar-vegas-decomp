// Decompiled from classes.dex (SourceFile: OpenGraphObject$Factory.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

import java.util.Arrays;
public final class OpenGraphObject$Factory {
    // Methods
    public OpenGraphObject$Factory()
    {
      super();
    }

    public static <T extends com.facebook.model.OpenGraphObject> T createForPost(
            Class<T> p0,
            String p1)
    {
      return createForPost(p0, p1, null, null, null, null);
    }

    public static <T extends com.facebook.model.OpenGraphObject> T createForPost(
            Class<T> p0,
            String p1,
            String p2,
            String p3,
            String p4,
            String p5)
    {
      com.facebook.model.OpenGraphObject v6;
      String[] v7;
      v6 = (com.facebook.model.OpenGraphObject)GraphObject$Factory.create(p0);
      if ( p1 != null )
        v6.setType(p1);
      if ( p2 != null )
        v6.setTitle(p2);
      if ( p3 != null )
      {
        v7 = new String[1];
        v7[0] = p3;
        v6.setImageUrls(Arrays.asList(v7));
      }
      if ( p4 != null )
        v6.setUrl(p4);
      if ( p5 != null )
        v6.setDescription(p5);
      v6.setCreateObject(true);
      v6.setData(GraphObject$Factory.create());
      return (T)v6;
    }

    public static com.facebook.model.OpenGraphObject createForPost(String p0)
    {
      return createForPost(com.facebook.model.OpenGraphObject.class, p0);
    }

}
