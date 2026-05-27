pipeline {
    agent { label 'linux-viva' }

    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Build') {
            steps {
                sh 'make all'
            }
        }

        stage('Test') {
            steps {
                sh 'make test'
            }
        }
    }

    post {
        success {
            echo 'Build und Tests erfolgreich!'
        }
        failure {
            echo 'Etwas ist schiefgelaufen!'
        }
    }
}
