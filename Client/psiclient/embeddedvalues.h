/*
 * Copyright (c) 2011, Psiphon Inc.
 * All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

static const char* PROPAGATION_CHANNEL_ID = "0";

static const char* SPONSOR_ID = "0";

// NOTE: if we put this in resources instead/as well, it would show up
//       in Explorer properties tab, etc.
// NOTE: set version to > 44 to ensure we don't get routes from /connected
static const char* CLIENT_VERSION = "45";

static const char* EMBEDDED_SERVER_LIST = "";

// When this flag is set, only the embedded server list is used. This is for testing only.
static const int IGNORE_SYSTEM_SERVER_LIST = 0;

static const char* REMOTE_SERVER_LIST_SIGNATURE_PUBLIC_KEY = "";
static const char* REMOTE_SERVER_LIST_ADDRESS = "s3.amazonaws.com";
static const char* REMOTE_SERVER_LIST_REQUEST_PATH = "invalid_bucket_name/server_list";

// These values are used when uploading diagnostic info
static const char* FEEDBACK_ENCRYPTION_PUBLIC_KEY = "";
static const char* FEEDBACK_DIAGNOSTIC_INFO_UPLOAD_SERVER = "";
static const char* FEEDBACK_DIAGNOSTIC_INFO_UPLOAD_PATH = "";
static const char* FEEDBACK_DIAGNOSTIC_INFO_UPLOAD_SERVER_HEADERS = "";

// NOTE: Info link may be opened when not tunneled
static const char* INFO_LINK_URL = "https://sites.google.com/a/psiphon3.com/psiphon3/";

static const char* UPGRADE_SIGNATURE_PUBLIC_KEY = "";
static const char* UPGRADE_ADDRESS = "s3.amazonaws.com";
static const char* UPGRADE_REQUEST_PATH = "invalid_bucket_name/psiphon3.exe.upgrade";

// To be shown to the user in the feedback page.
// The English page should be used for the URLs.
static const char* GET_NEW_VERSION_URL = "https://s3.amazonaws.com/invalid_bucket_name/en/index.html";
static const char* GET_NEW_VERSION_EMAIL = "get@example.com";
static const char* FAQ_URL = "https://s3.amazonaws.com/invalid_bucket_name/en.html#other_frequently_asked_questions";
static const char* DATA_COLLECTION_INFO_URL = "https://s3.amazonaws.com/invalid_bucket_name/en/index.html#what_user_information_does_psiphon_3_collect";

static const char* SPLIT_TUNNEL_ROUTES_URL_FORMAT = "https://s3.amazonaws.com/invalid_bucket_name/%s.route.zlib.json";
static const char* SPLIT_TUNNEL_ROUTES_SIGNATURE_PUBLIC_KEY = "";
static const char* SPLIT_TUNNEL_DNS_SERVER = "";