// Decompiled from classes.dex (SourceFile: GamesStatusCodes.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

import com.google.android.gms.common.api.Status;
public final class GamesStatusCodes {
    // Fields
    public static int A;
    public static int B;
    public static int C;
    public static int D;
    public static int E;
    public static int F;
    public static int G;
    public static int H;
    public static int I;
    public static int J;
    public static int K;
    public static int L;
    public static int M;
    public static int N;
    public static int O;
    public static int P;
    public static int Q;
    public static int R;
    public static int S;
    public static int T;
    public static int U;
    public static int V;
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    public static int i;
    public static int j;
    public static int k;
    public static int l;
    public static int m;
    public static int n;
    public static int o;
    public static int p;
    public static int q;
    public static int r;
    public static int s;
    public static int t;
    public static int u;
    public static int v;
    public static int w;
    public static int x;
    public static int y;
    public static int z;

    // Methods
    private GamesStatusCodes()
    {
      super();
    }

    public static String getStatusString(int p0)
    {
      Object[] v1;
      String v2;
      switch ( p0 )
      {
        case 0:
          v2 = "STATUS_OK";
          break;
        case 1:
          v2 = "STATUS_INTERNAL_ERROR";
          break;
        case 2:
          v2 = "STATUS_CLIENT_RECONNECT_REQUIRED";
          break;
        case 3:
          v2 = "STATUS_NETWORK_ERROR_STALE_DATA";
          break;
        case 4:
          v2 = "STATUS_NETWORK_ERROR_NO_DATA";
          break;
        case 5:
          v2 = "STATUS_NETWORK_ERROR_OPERATION_DEFERRED";
          break;
        case 6:
          v2 = "STATUS_NETWORK_ERROR_OPERATION_FAILED";
          break;
        case 7:
          v2 = "STATUS_LICENSE_CHECK_FAILED";
          break;
        case 8:
          v2 = "STATUS_APP_MISCONFIGURED";
          break;
        case 9:
          v2 = "STATUS_GAME_NOT_FOUND";
          break;
        case 14:
          v2 = "STATUS_INTERRUPTED";
          break;
        case 15:
          v2 = "STATUS_TIMEOUT";
          break;
        case 500:
          v2 = "STATUS_RESOLVE_STALE_OR_NO_DATA";
          break;
        case 1000:
          v2 = "STATUS_AUTH_ERROR_HARD";
          break;
        case 1001:
          v2 = "STATUS_AUTH_ERROR_USER_RECOVERABLE";
          break;
        case 1002:
          v2 = "STATUS_AUTH_ERROR_UNREGISTERED_CLIENT_ID";
          break;
        case 1003:
          v2 = "STATUS_AUTH_ERROR_API_ACCESS_DENIED";
          break;
        case 1500:
          v2 = "STATUS_PLAYER_OOB_REQUIRED";
          break;
        case 2000:
          v2 = "STATUS_REQUEST_UPDATE_PARTIAL_SUCCESS";
          break;
        case 2001:
          v2 = "STATUS_REQUEST_UPDATE_TOTAL_FAILURE";
          break;
        case 3000:
          v2 = "STATUS_ACHIEVEMENT_UNLOCK_FAILURE";
          break;
        case 3001:
          v2 = "STATUS_ACHIEVEMENT_UNKNOWN";
          break;
        case 3002:
          v2 = "STATUS_ACHIEVEMENT_NOT_INCREMENTAL";
          break;
        case 3003:
          v2 = "STATUS_ACHIEVEMENT_UNLOCKED";
          break;
        case 4000:
          v2 = "STATUS_SNAPSHOT_NOT_FOUND";
          break;
        case 4001:
          v2 = "STATUS_SNAPSHOT_CREATION_FAILED";
          break;
        case 4002:
          v2 = "STATUS_SNAPSHOT_CONTENTS_UNAVAILABLE";
          break;
        case 4003:
          v2 = "STATUS_SNAPSHOT_COMMIT_FAILED";
          break;
        case 4004:
          v2 = "STATUS_SNAPSHOT_CONFLICT";
          break;
        case 6000:
          v2 = "STATUS_MULTIPLAYER_ERROR_CREATION_NOT_ALLOWED";
          break;
        case 6001:
          v2 = "STATUS_MULTIPLAYER_ERROR_NOT_TRUSTED_TESTER";
          break;
        case 6002:
          v2 = "STATUS_MULTIPLAYER_ERROR_INVALID_MULTIPLAYER_TYPE";
          break;
        case 6003:
          v2 = "STATUS_MULTIPLAYER_DISABLED";
          break;
        case 6500:
          v2 = "STATUS_MATCH_ERROR_INVALID_PARTICIPANT_STATE";
          break;
        case 6501:
          v2 = "STATUS_MATCH_ERROR_INACTIVE_MATCH";
          break;
        case 6503:
          v2 = "STATUS_MATCH_ERROR_OUT_OF_DATE_VERSION";
          break;
        case 6504:
          v2 = "STATUS_MATCH_ERROR_INVALID_MATCH_RESULTS";
          break;
        case 6505:
          v2 = "STATUS_MATCH_ERROR_ALREADY_REMATCHED";
          break;
        case 6506:
          v2 = "STATUS_MATCH_NOT_FOUND";
          break;
        case 6507:
          v2 = "STATUS_MATCH_ERROR_LOCALLY_MODIFIED";
          break;
        case 7000:
          v2 = "STATUS_REAL_TIME_CONNECTION_FAILED";
          break;
        case 7001:
          v2 = "STATUS_REAL_TIME_MESSAGE_SEND_FAILED";
          break;
        case 7002:
          v2 = "STATUS_INVALID_REAL_TIME_ROOM_ID";
          break;
        case 7003:
          v2 = "STATUS_PARTICIPANT_NOT_CONNECTED";
          break;
        case 7004:
          v2 = "STATUS_REAL_TIME_ROOM_NOT_JOINED";
          break;
        case 7005:
          v2 = "STATUS_REAL_TIME_INACTIVE_ROOM";
          break;
        case 7006:
          v2 = "STATUS_REAL_TIME_SERVICE_NOT_CONNECTED";
          break;
        case 7007:
          v2 = "STATUS_OPERATION_IN_FLIGHT";
          break;
        case 8000:
          v2 = "STATUS_MILESTONE_CLAIMED_PREVIOUSLY";
          break;
        case 8001:
          v2 = "STATUS_MILESTONE_CLAIM_FAILED";
          break;
        case 8002:
          v2 = "STATUS_QUEST_NO_LONGER_AVAILABLE";
          break;
        case 8003:
          v2 = "STATUS_QUEST_NOT_STARTED";
          break;
        default:
          v1 = new Object[1];
          v1[0] = Integer.valueOf(p0);
          v2 = String.format("Status code (%d) not found!", v1);
          break;
      }
      return v2;
    }

}
