// Decompiled from classes.dex (SourceFile: TestSession.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.text.TextUtils;
import android.util.Log;
import com.facebook.internal.Utility;
import com.facebook.internal.Validate;
import com.facebook.model.GraphObject;
import java.util.Arrays;
public class TestSession extends com.facebook.Session {
    // Fields
    static final boolean $assertionsDisabled;
    private static java.lang.String TS_LOG_TAG;
    private static java.util.Map appTestAccounts;
    private static long serialVersionUID;
    private static java.lang.String testApplicationId;
    private static java.lang.String testApplicationSecret;
    private final com.facebook.TestSession$Mode mode;
    private final java.util.List requestedPermissions;
    private final java.lang.String sessionUniqueUserTag;
    private java.lang.String testAccountId;
    private java.lang.String testAccountUserName;
    private boolean wasAskedToExtendAccessToken;

    // Methods
    static
    {
      $assertionsDisabled = !com.facebook.TestSession.class.desiredAssertionStatus();
    }

    TestSession(
            android.app.Activity p0,
            java.util.List<String> p1,
            com.facebook.TokenCachingStrategy p2,
            String p3,
            com.facebook.TestSession$Mode p4)
    {
      super(p0, testApplicationId, p2);
      Validate.notNull(p1, "permissions");
      Validate.notNullOrEmpty(testApplicationId, "testApplicationId");
      Validate.notNullOrEmpty(testApplicationSecret, "testApplicationSecret");
      this.sessionUniqueUserTag = p3;
      this.mode = p4;
      this.requestedPermissions = p1;
    }

    public static com.facebook.TestSession createSessionWithPrivateUser(
            android.app.Activity p0,
            java.util.List<String> p1)
    {
      return createTestSession(p0, p1, TestSession$Mode.PRIVATE, null);
    }

    public static com.facebook.TestSession createSessionWithSharedUser(
            android.app.Activity p0,
            java.util.List<String> p1)
    {
      return createSessionWithSharedUser(p0, p1, null);
    }

    public static com.facebook.TestSession createSessionWithSharedUser(
            android.app.Activity p0,
            java.util.List<String> p1,
            String p2)
    {
      return createTestSession(p0, p1, TestSession$Mode.SHARED, p2);
    }

    private com.facebook.TestSession$TestAccount createTestAccountAndFinishAuth()
    {
      android.os.Bundle v1;
      Object[] v2;
      Object[] v3;
      com.facebook.Response v4;
      com.facebook.FacebookRequestError Error;
      com.facebook.TestSession$TestAccount v6;
      v1 = new android.os.Bundle();
      v1.putString("installed", "true");
      v1.putString("permissions", this.getPermissionsString());
      v1.putString("access_token", getAppAccessToken());
      if ( this.mode == TestSession$Mode.SHARED )
      {
        v2 = new Object[1];
        v2[0] = this.getSharedTestAccountIdentifier();
        v1.putString("name", String.format("Shared %s Testuser", v2));
      }
      v3 = new Object[1];
      v3[0] = testApplicationId;
      v4 = new com.facebook.Request(null, String.format("%s/accounts/test-users", v3), v1, HttpMethod.POST).executeAndWait();
      Error = v4.getError();
      v6 = (com.facebook.TestSession$TestAccount)v4.getGraphObjectAs(com.facebook.TestSession$TestAccount.class);
      if ( Error != null )
      {
        this.finishAuthOrReauth(null, Error.getException());
        return null;
      }
      else
      {
        if ( !$assertionsDisabled && v6 == null )
          throw new AssertionError();
        if ( this.mode == TestSession$Mode.SHARED )
        {
          v6.setName(v1.getString("name"));
          storeTestAccount(v6);
        }
        this.finishAuthWithTestAccount(v6);
      }
      return v6;
    }

    private static synchronized com.facebook.TestSession createTestSession(
            android.app.Activity p0,
            java.util.List<String> p1,
            com.facebook.TestSession$Mode p2,
            String p3)
    {
      boolean isNullOrEmpty;
      String[] v6;
      java.util.List v7;
      if ( Utility.isNullOrEmpty(testApplicationId) || (isNullOrEmpty = Utility.isNullOrEmpty(testApplicationSecret)) )
        throw new com.facebook.FacebookException("Must provide app ID and secret");
      try
      {
        if ( Utility.isNullOrEmpty(p1) )
        {
          v6 = new String[2];
          v6[0] = "email";
          v6[1] = "publish_actions";
          v7 = Arrays.asList(v6);
        }
        else
        {
          v7 = p1;
        }
        return new com.facebook.TestSession(p0, v7, new com.facebook.TestSession$TestTokenCachingStrategy(null), p3, p2);
      }
      finally
      {
      }
    }

    private void deleteTestAccount(String p0, String p1)
    {
      android.os.Bundle v3;
      com.facebook.Response v4;
      com.facebook.FacebookRequestError Error;
      com.facebook.model.GraphObject GraphObject; // RETVAL
      com.facebook.model.GraphObject v7;
      Object[] v8;
      Object[] v9;
      v3 = new android.os.Bundle();
      v3.putString("access_token", p1);
      v4 = new com.facebook.Request(null, p0, v3, HttpMethod.DELETE).executeAndWait();
      Error = v4.getError();
      GraphObject = v4.getGraphObject();
      v7 = GraphObject;
      if ( Error != null )
      {
        v8 = new Object[2];
        v8[0] = p0;
        v8[1] = Error.getException().toString();
        Log.w("FacebookSDK.TestSession", String.format("Could not delete test account %s: %s", v8));
      }
      else if ( GraphObject.getProperty("FACEBOOK_NON_JSON_RESULT") == Boolean.valueOf(false)
             || v7.getProperty("success") == Boolean.valueOf(false) )
      {
        v9 = new Object[1];
        v9[0] = p0;
        Log.w("FacebookSDK.TestSession", String.format("Could not delete test account %s: unknown reason", v9));
      }
    }

    private void findOrCreateSharedTestAccount()
    {
      com.facebook.TestSession$TestAccount TestAccountMatchingIdentifier; // RETVAL
    
      TestAccountMatchingIdentifier = findTestAccountMatchingIdentifier(this.getSharedTestAccountIdentifier());
      if ( TestAccountMatchingIdentifier != null )
        this.finishAuthWithTestAccount(TestAccountMatchingIdentifier);
      else
        this.createTestAccountAndFinishAuth();
    }

    private static synchronized com.facebook.TestSession$TestAccount findTestAccountMatchingIdentifier(
            String p0)
    {
      java.util.Iterator v1;
      com.facebook.TestSession$TestAccount v2;
      retrieveTestAccountsForAppIfNeeded();
      v1 = appTestAccounts.values().iterator();
      while ( v1.hasNext() )
      {
        v2 = (com.facebook.TestSession$TestAccount)v1.next();
        if ( v2.getName().contains(p0) )
          return v2;
      }
      return null;
    }

    private void finishAuthWithTestAccount(com.facebook.TestSession$TestAccount p0)
    {
      this.testAccountId = p0.getId();
      this.testAccountUserName = p0.getName();
      this.finishAuthOrReauth(AccessToken.createFromString(
                                p0.getAccessToken(),
                                this.requestedPermissions,
                                AccessTokenSource.TEST_USER), null);
    }

    static final String getAppAccessToken()
    {
      return testApplicationId + "|" + testApplicationSecret;
    }

    private String getPermissionsString()
    {
      return TextUtils.join(",", this.requestedPermissions);
    }

    private String getSharedTestAccountIdentifier()
    {
      long v1;
      long v2;
      v1 = this.getPermissionsString().hashCode() & 0xFFFFFFFFL;
      if ( this.sessionUniqueUserTag != null )
        v2 = this.sessionUniqueUserTag.hashCode() & 0xFFFFFFFFL;
      else
        v2 = 0;
      return this.validNameStringFromInteger(v2 ^ v1);
    }

    public static synchronized String getTestApplicationId()
    {
      return testApplicationId;
    }

    public static synchronized String getTestApplicationSecret()
    {
      return testApplicationSecret;
    }

    private static synchronized void populateTestAccounts(
            java.util.Collection<com.facebook.TestSession$TestAccount> p0,
            com.facebook.model.GraphObject p1)
    {
      java.util.Iterator v2;
      com.facebook.TestSession$TestAccount v3;
      v2 = p0.iterator();
      while ( v2.hasNext() )
      {
        v3 = (com.facebook.TestSession$TestAccount)v2.next();
        v3.setName(((com.facebook.model.GraphUser)p1.getPropertyAs(v3.getId(), com.facebook.model.GraphUser.class)).getName());
        storeTestAccount(v3);
      }
    }

    private static synchronized void retrieveTestAccountsForAppIfNeeded()
    {
      android.os.Bundle v0;
      com.facebook.Request v1;
      android.os.Bundle v2;
      com.facebook.Request v3;
      com.facebook.Request[] v4;
      java.util.List v5; // RETVAL
      java.util.List v6;
      if ( appTestAccounts == null )
      {
        try
        {
          appTestAccounts = new java.util.HashMap();
          Request.setDefaultBatchApplicationId(testApplicationId);
          v0 = new android.os.Bundle();
          v0.putString("access_token", getAppAccessToken());
          v1 = new com.facebook.Request(null, "app/accounts/test-users", v0, null);
          v1.setBatchEntryName("testUsers");
          v1.setBatchEntryOmitResultOnSuccess(false);
          v2 = new android.os.Bundle();
          v2.putString("access_token", getAppAccessToken());
          v2.putString("ids", "{result=testUsers:$.data.*.id}");
          v2.putString("fields", "name");
          v3 = new com.facebook.Request(null, "", v2, null);
          v3.setBatchEntryDependsOn("testUsers");
          v4 = new com.facebook.Request[2];
          v4[0] = v1;
          v4[1] = v3;
          v5 = Request.executeBatchAndWait(v4);
          v6 = v5;
          if ( v5 == null || v5.size() != 2 )
            throw new com.facebook.FacebookException("Unexpected number of results from TestUsers batch query");
          populateTestAccounts(
            (java.util.Collection)((com.facebook.TestSession$TestAccountsResponse)((com.facebook.Response)v6.get(0)).getGraphObjectAs(com.facebook.TestSession$TestAccountsResponse.class)).getData(),
            ((com.facebook.Response)v6.get(1)).getGraphObject());
        }
        finally
        {
        }
      }
    }

    public static synchronized void setTestApplicationId(String p0)
    {
      if ( testApplicationId != null && !testApplicationId.equals(p0) )
        throw new com.facebook.FacebookException("Can't have more than one test application ID");
      try
      {
        testApplicationId = p0;
      }
      finally
      {
      }
    }

    public static synchronized void setTestApplicationSecret(String p0)
    {
      if ( testApplicationSecret != null && !testApplicationSecret.equals(p0) )
        throw new com.facebook.FacebookException("Can't have more than one test application secret");
      try
      {
        testApplicationSecret = p0;
      }
      finally
      {
      }
    }

    private static synchronized void storeTestAccount(com.facebook.TestSession$TestAccount p0)
    {
      appTestAccounts.put(p0.getId(), p0);
    }

    private String validNameStringFromInteger(long p0)
    {
      StringBuilder v2;
      char[] v3;
      int v4;
      int v5;
      int v6;
      int v7;
      v2 = new StringBuilder("Perm");
      v3 = Long.toString(p0).toCharArray();
      v4 = v3.length;
      v5 = 0;
      v6 = 0;
      while ( v5 < v4 )
      {
        v7 = v3[v5];
        if ( v7 == v6 )
          v7 = (char)(v7 + 10);
        v2.append((char)(v7 + 49));
        ++v5;
        v6 = v7;
      }
      return v2.toString();
    }

    void authorize(com.facebook.Session$AuthorizationRequest p0)
    {
      if ( this.mode == TestSession$Mode.PRIVATE )
        this.createTestAccountAndFinishAuth();
      else
        this.findOrCreateSharedTestAccount();
    }

    void extendAccessToken()
    {
      this.wasAskedToExtendAccessToken = true;
      super.extendAccessToken();
    }

    void fakeTokenRefreshAttempt()
    {
      this.setCurrentTokenRefreshRequest(new com.facebook.Session$TokenRefreshRequest(this));
    }

    void forceExtendAccessToken(boolean p0)
    {
      com.facebook.AccessToken TokenInfo;
      TokenInfo = this.getTokenInfo();
      this.setTokenInfo(new com.facebook.AccessToken(TokenInfo.getToken(), new java.util.Date(), TokenInfo.getPermissions(), TokenInfo.getDeclinedPermissions(), AccessTokenSource.TEST_USER, new java.util.Date(0)));
      this.setLastAttemptedTokenExtendDate(new java.util.Date(0));
    }

    public final String getTestUserId()
    {
      return this.testAccountId;
    }

    public final String getTestUserName()
    {
      return this.testAccountUserName;
    }

    boolean getWasAskedToExtendAccessToken()
    {
      return this.wasAskedToExtendAccessToken;
    }

    void postStateChange(com.facebook.SessionState p0, com.facebook.SessionState p1, Exception p2)
    {
      String testAccountId;
      testAccountId = this.testAccountId;
      super.postStateChange(p0, p1, p2);
      if ( p1.isClosed() && testAccountId != null && this.mode == TestSession$Mode.PRIVATE )
        this.deleteTestAccount(testAccountId, getAppAccessToken());
    }

    boolean shouldExtendAccessToken()
    {
      boolean result; // RETVAL
    
      result = super.shouldExtendAccessToken();
      this.wasAskedToExtendAccessToken = false;
      return result;
    }

    public final String toString()
    {
      return "{TestSession" + " testUserId:" + this.testAccountId + " " + super.toString() + "}";
    }

}
