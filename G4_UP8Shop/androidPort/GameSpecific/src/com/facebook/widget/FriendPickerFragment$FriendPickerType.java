// Decompiled from classes.dex (SourceFile: FriendPickerFragment$FriendPickerType.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public final class FriendPickerFragment$FriendPickerType extends com.gameloft.android.DecompRT.EnumBase<FriendPickerFragment$FriendPickerType> {
    // Fields
    private static final com.facebook.widget.FriendPickerFragment$FriendPickerType[] $VALUES;
    public static final com.facebook.widget.FriendPickerFragment$FriendPickerType FRIENDS;
    public static final com.facebook.widget.FriendPickerFragment$FriendPickerType INVITABLE_FRIENDS;
    public static final com.facebook.widget.FriendPickerFragment$FriendPickerType TAGGABLE_FRIENDS;
    private final boolean requestIsCacheable;
    private final java.lang.String requestPath;

    // Methods
    static
    {
      com.facebook.widget.FriendPickerFragment$FriendPickerType[] v0;
      FRIENDS = new com.facebook.widget.FriendPickerFragment$FriendPickerType("FRIENDS", 0, "/friends", true);
      TAGGABLE_FRIENDS = new com.facebook.widget.FriendPickerFragment$FriendPickerType("TAGGABLE_FRIENDS", 1, "/taggable_friends", false);
      INVITABLE_FRIENDS = new com.facebook.widget.FriendPickerFragment$FriendPickerType("INVITABLE_FRIENDS", 2, "/invitable_friends", false);
      v0 = new com.facebook.widget.FriendPickerFragment$FriendPickerType[3];
      v0[0] = FRIENDS;
      v0[1] = TAGGABLE_FRIENDS;
      v0[2] = INVITABLE_FRIENDS;
      $VALUES = (com.facebook.widget.FriendPickerFragment$FriendPickerType[])v0;
    }

    private FriendPickerFragment$FriendPickerType(String p0, int p1, String p2, boolean p3)
    {
      super(p0, p1);
      this.requestPath = p2;
      this.requestIsCacheable = p3;
    }

    public static com.facebook.widget.FriendPickerFragment$FriendPickerType valueOf(
            String p0)
    {
      return (com.facebook.widget.FriendPickerFragment$FriendPickerType)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                          com.facebook.widget.FriendPickerFragment$FriendPickerType.class,
                                                                          p0);
    }

    public static com.facebook.widget.FriendPickerFragment$FriendPickerType[] values()
    {
      return (com.facebook.widget.FriendPickerFragment$FriendPickerType[])$VALUES.clone();
    }

    final String getRequestPath()
    {
      return this.requestPath;
    }

    final boolean isCacheable()
    {
      return this.requestIsCacheable;
    }

}
