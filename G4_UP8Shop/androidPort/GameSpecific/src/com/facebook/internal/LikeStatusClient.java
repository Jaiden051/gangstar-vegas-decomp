// Decompiled from classes.dex (SourceFile: LikeStatusClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class LikeStatusClient extends com.facebook.internal.PlatformServiceClient {
    // Fields
    private java.lang.String objectId;

    // Methods
    LikeStatusClient(android.content.Context p0, String p1, String p2)
    {
      super(p0, 65542, 65543, 20141001, p1);
      this.objectId = p2;
    }

    protected final void populateRequestBundle(android.os.Bundle p0)
    {
      p0.putString("com.facebook.platform.extra.OBJECT_ID", this.objectId);
    }

}
