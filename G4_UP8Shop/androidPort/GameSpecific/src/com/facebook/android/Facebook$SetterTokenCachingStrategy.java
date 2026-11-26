// Decompiled from classes.dex (SourceFile: Facebook$SetterTokenCachingStrategy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

import com.facebook.AccessTokenSource;
import com.facebook.TokenCachingStrategy;
class Facebook$SetterTokenCachingStrategy extends com.facebook.TokenCachingStrategy {
    // Fields
    final com.facebook.android.Facebook this$0;

    // Methods
    private Facebook$SetterTokenCachingStrategy(com.facebook.android.Facebook p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ Facebook$SetterTokenCachingStrategy(com.facebook.android.Facebook p0, com.facebook.android.Facebook$1 p1)
    {
      this(p0);
    }

    public void clear()
    {
      Facebook.access$102(this.this$0, null);
    }

    public android.os.Bundle load()
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      if ( Facebook.access$100(this.this$0) != null )
      {
        TokenCachingStrategy.putToken(v1, Facebook.access$100(this.this$0));
        TokenCachingStrategy.putExpirationMilliseconds(v1, Facebook.access$400(this.this$0));
        TokenCachingStrategy.putPermissions(v1, Facebook.access$600(Facebook.access$500(this.this$0)));
        TokenCachingStrategy.putSource(v1, AccessTokenSource.WEB_VIEW);
        TokenCachingStrategy.putLastRefreshMilliseconds(v1, Facebook.access$700(this.this$0));
      }
      return v1;
    }

    public void save(android.os.Bundle p0)
    {
      Facebook.access$102(this.this$0, TokenCachingStrategy.getToken(p0));
      Facebook.access$402(this.this$0, TokenCachingStrategy.getExpirationMilliseconds(p0));
      Facebook.access$502(this.this$0, Facebook.access$800(TokenCachingStrategy.getPermissions(p0)));
      Facebook.access$702(this.this$0, TokenCachingStrategy.getLastRefreshMilliseconds(p0));
    }

}
