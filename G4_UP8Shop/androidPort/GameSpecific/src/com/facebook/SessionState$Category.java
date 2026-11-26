// Decompiled from classes.dex (SourceFile: SessionState$Category.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class SessionState$Category extends com.gameloft.android.DecompRT.EnumBase<SessionState$Category> {
    // Fields
    private static final com.facebook.SessionState$Category[] $VALUES;
    public static final com.facebook.SessionState$Category CLOSED_CATEGORY;
    public static final com.facebook.SessionState$Category CREATED_CATEGORY;
    public static final com.facebook.SessionState$Category OPENED_CATEGORY;

    // Methods
    static
    {
      com.facebook.SessionState$Category[] v0;
      CREATED_CATEGORY = new com.facebook.SessionState$Category("CREATED_CATEGORY", 0);
      OPENED_CATEGORY = new com.facebook.SessionState$Category("OPENED_CATEGORY", 1);
      CLOSED_CATEGORY = new com.facebook.SessionState$Category("CLOSED_CATEGORY", 2);
      v0 = new com.facebook.SessionState$Category[3];
      v0[0] = CREATED_CATEGORY;
      v0[1] = OPENED_CATEGORY;
      v0[2] = CLOSED_CATEGORY;
      $VALUES = (com.facebook.SessionState$Category[])v0;
    }

    private SessionState$Category(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.facebook.SessionState$Category valueOf(String p0)
    {
      return (com.facebook.SessionState$Category)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.SessionState$Category.class, p0);
    }

    public static com.facebook.SessionState$Category[] values()
    {
      return (com.facebook.SessionState$Category[])$VALUES.clone();
    }

}
