// Decompiled from classes.dex (SourceFile: FacebookRequestError.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.internal.Utility;
public final class FacebookRequestError {
    // Fields
    private static java.lang.String BODY_KEY;
    private static java.lang.String CODE_KEY;
    private static int EC_APP_NOT_INSTALLED;
    private static int EC_APP_TOO_MANY_CALLS;
    private static int EC_EXPIRED;
    private static int EC_INVALID_SESSION;
    private static int EC_INVALID_TOKEN;
    private static int EC_PASSWORD_CHANGED;
    private static int EC_PERMISSION_DENIED;
    private static final com.facebook.FacebookRequestError$Range EC_RANGE_PERMISSION;
    private static int EC_SERVICE_UNAVAILABLE;
    private static int EC_UNCONFIRMED_USER;
    private static int EC_UNKNOWN_ERROR;
    private static int EC_USER_CHECKPOINTED;
    private static int EC_USER_TOO_MANY_CALLS;
    private static java.lang.String ERROR_CODE_FIELD_KEY;
    private static java.lang.String ERROR_CODE_KEY;
    private static java.lang.String ERROR_IS_TRANSIENT_KEY;
    private static java.lang.String ERROR_KEY;
    private static java.lang.String ERROR_MESSAGE_FIELD_KEY;
    private static java.lang.String ERROR_MSG_KEY;
    private static java.lang.String ERROR_REASON_KEY;
    private static java.lang.String ERROR_SUB_CODE_KEY;
    private static java.lang.String ERROR_TYPE_FIELD_KEY;
    private static java.lang.String ERROR_USER_MSG_KEY;
    private static java.lang.String ERROR_USER_TITLE_KEY;
    private static final com.facebook.FacebookRequestError$Range HTTP_RANGE_CLIENT_ERROR;
    private static final com.facebook.FacebookRequestError$Range HTTP_RANGE_SERVER_ERROR;
    private static final com.facebook.FacebookRequestError$Range HTTP_RANGE_SUCCESS;
    public static int INVALID_ERROR_CODE;
    public static int INVALID_HTTP_STATUS_CODE;
    private static int INVALID_MESSAGE_ID;
    private final java.lang.Object batchRequestResult;
    private final com.facebook.FacebookRequestError$Category category;
    private final java.net.HttpURLConnection connection;
    private final int errorCode;
    private final boolean errorIsTransient;
    private final java.lang.String errorMessage;
    private final java.lang.String errorType;
    private final java.lang.String errorUserMessage;
    private final java.lang.String errorUserTitle;
    private final com.facebook.FacebookException exception;
    private final org.json.JSONObject requestResult;
    private final org.json.JSONObject requestResultBody;
    private final int requestStatusCode;
    private final boolean shouldNotifyUser;
    private final int subErrorCode;
    private final int userActionMessageId;

    // Methods
    static
    {
      EC_RANGE_PERMISSION = new com.facebook.FacebookRequestError$Range(200, 299, null);
      HTTP_RANGE_SUCCESS = new com.facebook.FacebookRequestError$Range(200, 299, null);
      HTTP_RANGE_CLIENT_ERROR = new com.facebook.FacebookRequestError$Range(400, 499, null);
      HTTP_RANGE_SERVER_ERROR = new com.facebook.FacebookRequestError$Range(500, 599, null);
    }

    private FacebookRequestError(
            int p0,
            int p1,
            int p2,
            String p3,
            String p4,
            String p5,
            String p6,
            boolean p7,
            org.json.JSONObject p8,
            org.json.JSONObject p9,
            Object p10,
            java.net.HttpURLConnection p11)
    {
      this(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, null);
    }

    private FacebookRequestError(
            int p0,
            int p1,
            int p2,
            String p3,
            String p4,
            String p5,
            String p6,
            boolean p7,
            org.json.JSONObject p8,
            org.json.JSONObject p9,
            Object p10,
            java.net.HttpURLConnection p11,
            com.facebook.FacebookException p12)
    {
      super();
      int v14;
      com.facebook.FacebookRequestError$Category v15;
      int v16;
      com.facebook.FacebookRequestError$Category v17;
      int v18;
      boolean v19;
      com.facebook.FacebookRequestError$Category v20;
      this.requestStatusCode = p0;
      this.errorCode = p1;
      this.subErrorCode = p2;
      this.errorType = p3;
      this.errorMessage = p4;
      this.requestResultBody = p8;
      this.requestResult = p9;
      this.batchRequestResult = p10;
      this.connection = p11;
      this.errorUserTitle = p5;
      this.errorUserMessage = p6;
      this.errorIsTransient = p7;
      if ( p12 != null )
      {
        this.exception = p12;
        v14 = 1;
      }
      else
      {
        this.exception = new com.facebook.FacebookServiceException(this, p4);
        v14 = 0;
      }
      v15 = null;
      v16 = 0;
      if ( v14 != 0 )
      {
        v17 = FacebookRequestError$Category.CLIENT;
        v18 = 0;
      }
      else
      {
        if ( p1 == 1 || p1 == 2 )
        {
          v15 = FacebookRequestError$Category.SERVER;
        }
        else if ( p1 == 4 || p1 == 17 )
        {
          v15 = FacebookRequestError$Category.THROTTLING;
        }
        else if ( p1 == 10 || EC_RANGE_PERMISSION.contains(p1) )
        {
          v15 = FacebookRequestError$Category.PERMISSION;
          v16 = 2131165521;
        }
        else if ( p1 == 102 || p1 == 190 )
        {
          if ( p2 == 459 || p2 == 464 )
          {
            v15 = FacebookRequestError$Category.AUTHENTICATION_RETRY;
            v16 = 2131165517;
          }
          else
          {
            v15 = FacebookRequestError$Category.AUTHENTICATION_REOPEN_SESSION;
            if ( p2 == 458 || p2 == 463 )
            {
              v16 = 2131165518;
            }
            else if ( p2 == 460 )
            {
              v16 = 2131165519;
            }
            else
            {
              v16 = 2131165520;
            }
          }
        }
        if ( v15 != null )
        {
          v17 = v15;
          v18 = v16;
        }
        else if ( HTTP_RANGE_CLIENT_ERROR.contains(p0) )
        {
          v17 = FacebookRequestError$Category.BAD_REQUEST;
          v18 = v16;
        }
        else
        {
          if ( HTTP_RANGE_SERVER_ERROR.contains(p0) )
            v20 = FacebookRequestError$Category.SERVER;
          else
            v20 = FacebookRequestError$Category.OTHER;
          v17 = v20;
          v18 = v16;
        }
      }
      v19 = p6 != null && p6.length() > 0;
      this.category = v17;
      this.userActionMessageId = v18;
      this.shouldNotifyUser = v19;
    
    }

    public FacebookRequestError(int p0, String p1, String p2)
    {
      this(-1, p0, -1, p1, p2, null, null, false, null, null, null, null, null);
    }

    FacebookRequestError(java.net.HttpURLConnection p0, Exception p1)
    {
      this(-1, -1, -1, null, null, null, null, false, null, null, null, p0, (p1 instanceof com.facebook.FacebookException) ? (com.facebook.FacebookException)p1 : new com.facebook.FacebookException(p1));
    }

    static com.facebook.FacebookRequestError checkResponseAndCreateError(
            org.json.JSONObject p0,
            Object p1,
            java.net.HttpURLConnection p2)
    {
      int Int;
      Object StringPropertyAsJSON; // RETVAL
      org.json.JSONObject v5;
      String v6;
      String v7;
      String v8;
      String v9;
      boolean v10;
      int v11;
      int v12;
      int v13;
      org.json.JSONObject v14;
      com.facebook.FacebookRequestError v17;
      org.json.JSONObject v18;
      try
      {
        if ( !p0.has("code") )
          return null;
        Int = p0.getInt("code");
        StringPropertyAsJSON = Utility.getStringPropertyAsJSON(p0, "body", "FACEBOOK_NON_JSON_RESULT");
        if ( StringPropertyAsJSON != null && StringPropertyAsJSON instanceof org.json.JSONObject )
        {
          v5 = (org.json.JSONObject)StringPropertyAsJSON;
          v6 = null;
          v7 = null;
          v8 = null;
          v9 = null;
          v10 = false;
          v11 = 0;
          v12 = 0;
          v13 = 0;
          if ( v5.has("error") )
          {
            v14 = (org.json.JSONObject)Utility.getStringPropertyAsJSON(v5, "error", null);
            v6 = v14.optString("type", null);
            v7 = v14.optString("message", null);
            v11 = v14.optInt("code", -1);
            v12 = v14.optInt("error_subcode", -1);
            v8 = v14.optString("error_user_msg", null);
            v9 = v14.optString("error_user_title", null);
            v10 = v14.optBoolean("is_transient", false);
            v13 = 1;
          }
          else if ( v5.has("error_code") || v5.has("error_msg") || v5.has("error_reason") )
          {
            v6 = v5.optString("error_reason", null);
            v7 = v5.optString("error_msg", null);
            v11 = v5.optInt("error_code", -1);
            v12 = v5.optInt("error_subcode", -1);
            v13 = 1;
          }
          if ( v13 != 0 )
            return new com.facebook.FacebookRequestError(Int, v11, v12, v6, v7, v9, v8, v10, v5, p0, p1, p2);
        }
        if ( HTTP_RANGE_SUCCESS.contains(Int) )
          return null;
        v17 = null;
        if ( p0.has("body") )
          v18 = (org.json.JSONObject)Utility.getStringPropertyAsJSON(p0, "body", "FACEBOOK_NON_JSON_RESULT");
        else
          v18 = null;
        return (v17 = new com.facebook.FacebookRequestError(Int, -1, -1, null, null, null, null, false, v18, p0, p1, p2));
      }
      catch ( org.json.JSONException e )
      {
      }
      return null;
    }

    public final Object getBatchRequestResult()
    {
      return this.batchRequestResult;
    }

    public final com.facebook.FacebookRequestError$Category getCategory()
    {
      return this.category;
    }

    public final java.net.HttpURLConnection getConnection()
    {
      return this.connection;
    }

    public final int getErrorCode()
    {
      return this.errorCode;
    }

    public final boolean getErrorIsTransient()
    {
      return this.errorIsTransient;
    }

    public final String getErrorMessage()
    {
      if ( this.errorMessage != null )
        return this.errorMessage;
      else
        return this.exception.getLocalizedMessage();
    }

    public final String getErrorType()
    {
      return this.errorType;
    }

    public final String getErrorUserMessage()
    {
      return this.errorUserMessage;
    }

    public final String getErrorUserTitle()
    {
      return this.errorUserTitle;
    }

    public final com.facebook.FacebookException getException()
    {
      return this.exception;
    }

    public final org.json.JSONObject getRequestResult()
    {
      return this.requestResult;
    }

    public final org.json.JSONObject getRequestResultBody()
    {
      return this.requestResultBody;
    }

    public final int getRequestStatusCode()
    {
      return this.requestStatusCode;
    }

    public final int getSubErrorCode()
    {
      return this.subErrorCode;
    }

    public final int getUserActionMessageId()
    {
      return this.userActionMessageId;
    }

    public final boolean shouldNotifyUser()
    {
      return this.shouldNotifyUser;
    }

    public final String toString()
    {
      return "{HttpStatus: "
           + this.requestStatusCode
           + ", errorCode: "
           + this.errorCode
           + ", errorType: "
           + this.errorType
           + ", errorMessage: "
           + this.getErrorMessage()
           + "}";
    }

}
