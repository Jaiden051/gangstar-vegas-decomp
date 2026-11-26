// Decompiled from classes.dex (SourceFile: Response$PagingDirection.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

public final class Response$PagingDirection extends com.gameloft.android.DecompRT.EnumBase<Response$PagingDirection> {
    // Fields
    private static final com.facebook.Response$PagingDirection[] $VALUES;
    public static final com.facebook.Response$PagingDirection NEXT;
    public static final com.facebook.Response$PagingDirection PREVIOUS;

    // Methods
    static
    {
      com.facebook.Response$PagingDirection[] v0;
      NEXT = new com.facebook.Response$PagingDirection("NEXT", 0);
      PREVIOUS = new com.facebook.Response$PagingDirection("PREVIOUS", 1);
      v0 = new com.facebook.Response$PagingDirection[2];
      v0[0] = NEXT;
      v0[1] = PREVIOUS;
      $VALUES = (com.facebook.Response$PagingDirection[])v0;
    }

    private Response$PagingDirection(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.facebook.Response$PagingDirection valueOf(String p0)
    {
      return (com.facebook.Response$PagingDirection)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.Response$PagingDirection.class, p0);
    }

    public static com.facebook.Response$PagingDirection[] values()
    {
      return (com.facebook.Response$PagingDirection[])$VALUES.clone();
    }

}
