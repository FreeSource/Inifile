/*--------------------------------------------------------------------------
    DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
    
    File: Inifile.cpp
    Version: 2.0.0
    Copyright: (C) 2012 by Enzo Roberto Verlato
    Contact: enzover@ig.com.br
    All rights reserved.
    
----------------------------------------------------------------------------
    This file is part of the Inifile Class.
    
    This file may be used under the terms of the GNU General Public
    License version 2.0 as published by the Free Software Foundation
    and appearing in the file LICENSE.GPL2 included in the packaging of
    this file.
    
    This file is provided "AS IS" in the hope that it will be useful,
    but WITHOUT ANY WARRANTY OF ANY KIND, INCLUDING THE WARRANTIES OF DESIGN;
    without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
    PARTICULAR PURPOSE. See the GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software Foundation,
    Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
--------------------------------------------------------------------------*/

#include <Inifile.h>

/*#include <algorithm>
#include <stdexcept>
#include <stdlib.h>

#include <charseq.h>
#include <system.h>*/

namespace {
    
/*    using namespace util;
    using namespace crosslib;
    using std::runtime_error;
    
    const int OPTION_NOT_FOUND = -1;
    
    // PRIVATE:
    string applicationFullPath;
    vector<string> parameters;
    vector<string> optionParameters;
    
    unsigned currentPosition;
    bool caseSensitiveMode;
    string optionPrefix;
    bool postfixed;
    
    const string getAllParameters();
    void convertOptionPostfixToPrefix();
    const int findOptionPosition( string option );
    void (*convert)( string &text );
    void tolower( string &text );
    void noConvert( string &text );
    const string prefixAndPostfixOptionPostfixWithWhitespace( string parameters );
    const vector<string> removeNullElement( vector<string> parameters );
    const vector<string> removeOptionPostfixDuplicityBetweenOptionAndValue( vector<string> parameters );
    
    const string getAllParameters() {
        string parameters;
        for ( unsigned position = 0; position < ::parameters.size(); ++position ) {
            parameters.append( ::parameters.at( position ) );
            parameters.append( position + 1 == ::parameters.size() ? "" : " " );
        }
        return parameters;
    }
    
    const int findOptionPosition( string option ) {
        if ( !option.empty() ) {
            convert( option );
            
            string parameter;
            for ( unsigned position = 0; position < optionParameters.size(); ++position ) {
                parameter = optionParameters.at( position );
                
                convert( parameter );
                if ( optionPrefix + option == parameter ) {
                    return position;
                }
            }
        }
        return OPTION_NOT_FOUND;
    }
    
    void tolower( string &text ) {
        transform( text.begin(), text.end(), text.begin(), ::tolower );
    }
    
    void noConvert( string &text ) {}
    
    void convertOptionPostfixToPrefix() {
        vector<string> parameters = split( prefixAndPostfixOptionPostfixWithWhitespace( getAllParameters() ), " " );
        parameters = removeNullElement( parameters );
        parameters = removeOptionPostfixDuplicityBetweenOptionAndValue( parameters );
        
        for ( unsigned position = 0; position < parameters.size(); ++position ) {
            if ( position > 0 && parameters.at( position ) == optionPrefix ) {
                if ( parameters.at( position - 1 ).find( optionPrefix ) == string::npos ) {
                    parameters.at( position - 1 ) = optionPrefix + parameters.at( position - 1 );
                }
                
                parameters.erase( parameters.begin() + position );
                --position;
            }
        }
        optionParameters = parameters;
    }
    
    const vector<string> removeOptionPostfixDuplicityBetweenOptionAndValue( vector<string> parameters ) {
        for ( unsigned position = 0; position < parameters.size(); ++position ) {
            if ( position + 1 < parameters.size() && parameters.at( position ) == optionPrefix && parameters.at( position + 1 ) == optionPrefix ) {
                parameters.erase( parameters.begin() + position );
                --position;
            }
        }
        return parameters;
    }
    
    const string prefixAndPostfixOptionPostfixWithWhitespace( string parameters ) {
        size_t found = parameters.find( optionPrefix, 0 );
        while ( found != string::npos ) {
            parameters.replace( parameters.find( optionPrefix, found ), optionPrefix.size(), " " + optionPrefix + " " );
            found += 2 + optionPrefix.size();
            found = parameters.find( optionPrefix, found );
        }
        return parameters;
    }
    
    const vector<string> removeNullElement( vector<string> parameters ) {
        for ( unsigned position = 0; position < parameters.size(); ++position ) {
            if ( parameters.at( position ).empty() ) {
                parameters.erase( parameters.begin() + position );
                --position;
            }
        }
        return parameters;
    }*/
}

namespace environs {
    
    void Inifile::appendSection( const string &property ) const {
        
    }
    void Inifile::appendProperty( const string &property ) const {
        
    }
    
    void Inifile::deleteProperty( const string &property ) const {
        
    }
    
    void Inifile::deleteSection( const string &property ) const {
        
    }
    
    void Inifile::deleteAllSections( const string &property ) const {
        
    }
    
    void Inifile::deleteAllProperties( const string &property ) const {
        
    }
    
    void Inifile::renameProperty( const string &property ) const {
        
    }
    
    void Inifile::renameSection( const string &section ) const {
        
    }
    
    void Inifile::create( const string &filename ) const {
        
    }
    
    void Inifile::rename( const string &filename ) const {
        
    }
    
    void IniFile::sort() const {
        
    }
    
    void Inifile::load( const string &filename ) const {
        
    }
    
    void Inifile::save() const {
        
    }
    
    void Inifile::saveAs( const string &filename ) const {
        
    }
    
    const string Inifile::setValue( const string &section, const string &property ) {
        return "";
    }
    
    const string Inifile::getValue( const string &section, const string &property ) {
        return "";
    }
    
    const string Inifile::getSections() const {
        return sections;
    }
    
    const string Inifile::getProperties( const string &section ) const {
        return properties;
    }
}
