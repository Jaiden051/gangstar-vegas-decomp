// Decompiled from classes.dex (SourceFile: SessionState.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

public final class SessionState extends com.gameloft.android.DecompRT.EnumBase<SessionState> {
    // Fields
    private static final com.facebook.SessionState[] $VALUES;
    public static final com.facebook.SessionState CLOSED;
    public static final com.facebook.SessionState CLOSED_LOGIN_FAILED;
    public static final com.facebook.SessionState CREATED;
    public static final com.facebook.SessionState CREATED_TOKEN_LOADED;
    public static final com.facebook.SessionState OPENED;
    public static final com.facebook.SessionState OPENED_TOKEN_UPDATED;
    public static final com.facebook.SessionState OPENING;
    private final com.facebook.SessionState$Category category;

    // Methods
    static
    {
      com.facebook.SessionState[] v0;
      CREATED = new com.facebook.SessionState("CREATED", 0, SessionState$Category.CREATED_CATEGORY);
      CREATED_TOKEN_LOADED = new com.facebook.SessionState("CREATED_TOKEN_LOADED", 1, SessionState$Category.CREATED_CATEGORY);
      OPENING = new com.facebook.SessionState("OPENING", 2, SessionState$Category.CREATED_CATEGORY);
      OPENED = new com.facebook.SessionState("OPENED", 3, SessionState$Category.OPENED_CATEGORY);
      OPENED_TOKEN_UPDATED = new com.facebook.SessionState("OPENED_TOKEN_UPDATED", 4, SessionState$Category.OPENED_CATEGORY);
      CLOSED_LOGIN_FAILED = new com.facebook.SessionState("CLOSED_LOGIN_FAILED", 5, SessionState$Category.CLOSED_CATEGORY);
      CLOSED = new com.facebook.SessionState("CLOSED", 6, SessionState$Category.CLOSED_CATEGORY);
      v0 = new com.facebook.SessionState[7];
      v0[0] = CREATED;
      v0[1] = CREATED_TOKEN_LOADED;
      v0[2] = OPENING;
      v0[3] = OPENED;
      v0[4] = OPENED_TOKEN_UPDATED;
      v0[5] = CLOSED_LOGIN_FAILED;
      v0[6] = CLOSED;
      $VALUES = (com.facebook.SessionState[])v0;
    }

    private SessionState(String p0, int p1, com.facebook.SessionState$Category p2)
    {
      super(p0, p1);
      this.category = p2;
    }

    public static com.facebook.SessionState valueOf(String p0)
    {
      return (com.facebook.SessionState)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.SessionState.class, p0);
    }

    public static com.facebook.SessionState[] values()
    {
      return (com.facebook.SessionState[])$VALUES.clone();
    }

    public final boolean isClosed()
    {
      return this.category == SessionState$Category.CLOSED_CATEGORY;
    }

    public final boolean isOpened()
    {
      return this.category == SessionState$Category.OPENED_CATEGORY;
    }

}
